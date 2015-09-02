<?php
/**
 * @file
 * training_calendar.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function training_calendar_taxonomy_default_vocabularies() {
  return array(
    'course' => array(
      'name' => 'Course',
      'machine_name' => 'course',
      'description' => 'List of courses like Drupal, PHP, Linux, Soft Skills etc.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
