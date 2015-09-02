<?php
/**
 * @file
 * training_calendar.features.inc
 */

/**
 * Implements hook_node_info().
 */
function training_calendar_node_info() {
  $items = array(
    'training_calender' => array(
      'name' => t('Training-Calender'),
      'base' => 'node_content',
      'description' => t('Training-Calender'),
      'has_title' => '1',
      'title_label' => t('Training'),
      'help' => '',
    ),
  );
  return $items;
}
