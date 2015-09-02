<?php
/**
 * @file
 * training_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function training_type_node_info() {
  $items = array(
    'training' => array(
      'name' => t('Training'),
      'base' => 'node_content',
      'description' => t('Training'),
      'has_title' => '1',
      'title_label' => t('Training Name'),
      'help' => '',
    ),
  );
  return $items;
}
