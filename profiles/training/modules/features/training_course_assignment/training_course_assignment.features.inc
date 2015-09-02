<?php
/**
 * @file
 * training_course_assignment.features.inc
 */

/**
 * Implements hook_node_info().
 */
function training_course_assignment_node_info() {
  $items = array(
    'course_assignments' => array(
      'name' => t('Course-Assignments'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Assignment'),
      'help' => '',
    ),
  );
  return $items;
}
