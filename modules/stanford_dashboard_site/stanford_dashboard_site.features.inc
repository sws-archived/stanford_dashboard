<?php
/**
 * @file
 * stanford_dashboard_site.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_dashboard_site_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_dashboard_site_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function stanford_dashboard_site_node_info() {
  $items = array(
    'stanford_dashboard_site' => array(
      'name' => t('Site'),
      'base' => 'node_content',
      'description' => t('A site whose status can be viewed via the dashboard.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
