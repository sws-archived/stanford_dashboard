<?php
/**
 * @file
 * stanford_dashboard.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_dashboard_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function stanford_dashboard_node_info() {
  $items = array(
    'stanford_dashboard' => array(
      'name' => t('Stanford Dashboard'),
      'base' => 'node_content',
      'description' => t('Retrieves site data from Pingdom, and maintains update status.'),
      'has_title' => '1',
      'title_label' => t('Account Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
