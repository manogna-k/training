<?php

/**
 * @file
 * Training website branding.
 */

/**
 * Implements hook_init().
 */
function training_init() {
  global $conf;

  // Use this early opportunity to brand the install/runtime experience.
  // Once the generic theme settings are saved, or a custom theme's settings
  // are saved to override it, this will not be effective anymore, which is
  // intended.
  if (empty($conf['theme_settings'])) {
    $conf['theme_settings'] = array(
      'default_logo' => 0,
      // Training logo for Training Installation Profile.
      'logo_path' => empty($conf['site_name']) ? 'profiles/training/TrainingDrupalLogo.jpeg' : 'profiles/training/TrainingDrupalLogo.jpeg',
    );
  }
}

/**
 * Implements hook_install_tasks_alter().
 */
function training_install_tasks_alter(&$tasks, $install_state) {
  // Preselect the English language, so users can skip the language selection
  // form. We do not ship other languages with Training website at this point.
  if (!isset($_GET['locale'])) {
    $_POST['locale'] = 'en';
  }
}

/**
 * Implements hook_install_tasks().
 */
function training_install_tasks($install_state) {
  return array(
    // Just a hidden task callback.
    'training_profile_setup' => array(),
  );
}

/**
 * Installer task callback.
 */
function training_profile_setup() {
  global $language;

  // Add a node describing how to get started with Training website.
  $welcome_file = 'profiles/training/' . $language->language . '/welcome.txt';
  if (!file_exists($welcome_file)) {
    drupal_set_message(t('Could not find file @filepath.', array('@filepath' => $welcome_file)), 'error');
    $welcome_file = 'profiles/training/en/welcome.txt';
  }
  if ($welcome_node = _training_profile_create_node($welcome_file, 'page')) {
    node_save($welcome_node);
    variable_set('training_welcome', $welcome_node->nid);
  }
  else {
    drupal_set_message(t('The file @filepath could not be read. The welcome message will not be generated.', array('@filepath' => $welcome_file)), 'error');
  }
}

/**
 * Creates a node from the specified filename.
 *
 * The node body will contain the contents of the file. All relative links must
 * be identified within the file so they can be mapped to paths appropriate for
 * the installation.
 *
 * The relative links are identified in the file by surrounding the actual
 * link with double square brackets. For example:
 *
 * <a href="[[admin]]">Admin page</a>
 *
 * @param string $filename
 *   The name of the file to retrieve the text from.
 * @param string $page_type
 *   The type of node to create.
 */
function _training_profile_create_node($filename, $page_type) {
  $contents = trim(file_get_contents($filename));
  if (!$contents) {
    return NULL;
  }

  // Grab the title from the document and then remove the title so it
  // isn't shown in the title and the body. The title will be encoded
  // in the document in the following form:
  // <h1 [class="..."]>{TITLE}</h1>
  $title_regexp = "/[\<]h1(\s*[^=\>]*=\"[^\"]*\")*\s*[\>](.*)\<\/h1\>/i";
  if (preg_match($title_regexp, $contents, $match)) {
    $title = $match[count($match) - 1];
    // Remove the title from the body of the document.
    $contents = preg_replace($title_regexp, '', $contents);
  }

  // Replace all local links with the full path.
  $options = array();
  $options['alias'] = TRUE;
  $link_regexp = "/(\[\[)([\/?\w+\-*]+)(\]\])/e";
  $contents = preg_replace($link_regexp, 'check_url(url("\2", $options))', $contents);
  $node = new stdClass();
  $node->title = $title;
  $node->body['und'][0]['value'] = $contents;
  $node->body['und'][0]['summary'] = $contents;
  $node->body['und'][0]['format'] = 'full_html';
  $node->uid = 1;
  $node->type = $page_type;
  $node->status = 1;
  $node->promote = 1;
  return $node;
}

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
if (!function_exists("system_form_install_configure_form_alter")) {
  function system_form_install_configure_form_alter(&$form, $form_state) {
    $form['site_information']['site_name']['#default_value'] = 'Training';
  }
}

/**
 * Implements hook_form_alter().
 *
 * Select the current install profile by default.
 */
if (!function_exists("system_form_install_select_profile_form_alter")) {
  function system_form_install_select_profile_form_alter(&$form, $form_state) {
    foreach ($form['profile'] as $key => $element) {
      $form['profile'][$key]['#value'] = 'training';
    }
  }
}
