<?php
/**
 * @file
 * training_courses_listing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function training_courses_listing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'course_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Course Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 1;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_coursetopics',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_coursetopics' => 'field_coursetopics',
    'field_subsequence' => 'field_subsequence',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_coursetopics' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subsequence' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Course-Topic */
  $handler->display->display_options['fields']['field_coursetopics']['id'] = 'field_coursetopics';
  $handler->display->display_options['fields']['field_coursetopics']['table'] = 'field_data_field_coursetopics';
  $handler->display->display_options['fields']['field_coursetopics']['field'] = 'field_coursetopics';
  $handler->display->display_options['fields']['field_coursetopics']['label'] = '';
  $handler->display->display_options['fields']['field_coursetopics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coursetopics']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_coursetopics']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_coursetopics']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_coursetopics']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_coursetopics']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_coursetopics']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_coursetopics']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_coursetopics']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_coursetopics']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_coursetopics']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_coursetopics']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_coursetopics']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_coursetopics']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_coursetopics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coursetopics']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_coursetopics']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_coursetopics']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_coursetopics']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_coursetopics']['field_api_classes'] = 0;
  /* Field: Content: Sequence */
  $handler->display->display_options['fields']['field_subsequence']['id'] = 'field_subsequence';
  $handler->display->display_options['fields']['field_subsequence']['table'] = 'field_data_field_subsequence';
  $handler->display->display_options['fields']['field_subsequence']['field'] = 'field_subsequence';
  $handler->display->display_options['fields']['field_subsequence']['label'] = '';
  $handler->display->display_options['fields']['field_subsequence']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_subsequence']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_subsequence']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_subsequence']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_subsequence']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_subsequence']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_subsequence']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_subsequence']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_subsequence']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_subsequence']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_subsequence']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_subsequence']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_subsequence']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_subsequence']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subsequence']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_subsequence']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_subsequence']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_subsequence']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_subsequence']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course_subtopic' => 'course_subtopic',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'taxonomy/term/%';
  $export['course_listing'] = $view;

  return $export;
}
