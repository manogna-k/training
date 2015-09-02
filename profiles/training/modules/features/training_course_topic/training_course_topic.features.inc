<?php
/**
 * @file
 * training_course_topic.features.inc
 */

/**
 * Implements hook_node_info().
 */
function training_course_topic_node_info() {
  $items = array(
    'course_topic' => array(
      'name' => t('Course-Topic'),
      'base' => 'node_content',
      'description' => t('Topics and sub-topics under Course'),
      'has_title' => '1',
      'title_label' => t('Topic'),
      'help' => '',
    ),
  );
  return $items;
}
