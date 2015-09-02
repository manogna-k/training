<?php
/**
 * @file
 * training_course_sub_topic.features.inc
 */

/**
 * Implements hook_node_info().
 */
function training_course_sub_topic_node_info() {
  $items = array(
    'course_subtopic' => array(
      'name' => t('Course-SubTopic'),
      'base' => 'node_content',
      'description' => t('Sub Topic of a Course'),
      'has_title' => '1',
      'title_label' => t('Sub Topic'),
      'help' => '',
    ),
  );
  return $items;
}
