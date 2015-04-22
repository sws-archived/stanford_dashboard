<?php
/**
 * @file
 * stanford_dashboard_site.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function stanford_dashboard_site_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'create stanford_dashboard_site content'.
  $permissions['create stanford_dashboard_site content'] = array(
    'name' => 'create stanford_dashboard_site content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any stanford_dashboard_site content'.
  $permissions['delete any stanford_dashboard_site content'] = array(
    'name' => 'delete any stanford_dashboard_site content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own stanford_dashboard_site content'.
  $permissions['delete own stanford_dashboard_site content'] = array(
    'name' => 'delete own stanford_dashboard_site content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in stanford_dashboard_site_status'.
  $permissions['delete terms in stanford_dashboard_site_status'] = array(
    'name' => 'delete terms in stanford_dashboard_site_status',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in stanford_dashboard_site_type'.
  $permissions['delete terms in stanford_dashboard_site_type'] = array(
    'name' => 'delete terms in stanford_dashboard_site_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any stanford_dashboard_site content'.
  $permissions['edit any stanford_dashboard_site content'] = array(
    'name' => 'edit any stanford_dashboard_site content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own stanford_dashboard_site content'.
  $permissions['edit own stanford_dashboard_site content'] = array(
    'name' => 'edit own stanford_dashboard_site content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in stanford_dashboard_site_status'.
  $permissions['edit terms in stanford_dashboard_site_status'] = array(
    'name' => 'edit terms in stanford_dashboard_site_status',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in stanford_dashboard_site_type'.
  $permissions['edit terms in stanford_dashboard_site_type'] = array(
    'name' => 'edit terms in stanford_dashboard_site_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
