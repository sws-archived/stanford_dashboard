<?php
/**
 * @file
 * stanford_dashboard.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function stanford_dashboard_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create stanford_dashboard content'.
  $permissions['create stanford_dashboard content'] = array(
    'name' => 'create stanford_dashboard content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any stanford_dashboard content'.
  $permissions['delete any stanford_dashboard content'] = array(
    'name' => 'delete any stanford_dashboard content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own stanford_dashboard content'.
  $permissions['delete own stanford_dashboard content'] = array(
    'name' => 'delete own stanford_dashboard content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any stanford_dashboard content'.
  $permissions['edit any stanford_dashboard content'] = array(
    'name' => 'edit any stanford_dashboard content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own stanford_dashboard content'.
  $permissions['edit own stanford_dashboard content'] = array(
    'name' => 'edit own stanford_dashboard content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
