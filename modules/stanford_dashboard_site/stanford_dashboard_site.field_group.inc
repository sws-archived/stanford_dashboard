<?php
/**
 * @file
 * stanford_dashboard_site.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_dashboard_site_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_site_response|node|stanford_dashboard_site|form';
  $field_group->group_name = 'group_s_site_response';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_dashboard_site';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Response Info',
    'weight' => '5',
    'children' => array(
      0 => 'field_s_site_status',
      1 => 'field_s_site_response',
      2 => 'field_s_site_alert',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Response Info',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-s-site-response field-group-fieldset',
        'description' => 'These fields are populated by the response from Pingdom',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_s_site_response|node|stanford_dashboard_site|form'] = $field_group;

  return $export;
}
