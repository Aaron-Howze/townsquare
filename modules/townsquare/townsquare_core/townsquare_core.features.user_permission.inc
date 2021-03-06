<?php
/**
 * @file
 * townsquare_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function townsquare_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(),
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(),
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(),
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(),
  );

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(),
  );

  // Exported permission: export nodes
  $permissions['export nodes'] = array(
    'name' => 'export nodes',
    'roles' => array(),
  );

  // Exported permission: export own nodes
  $permissions['export own nodes'] = array(
    'name' => 'export own nodes',
    'roles' => array(),
  );

  // Exported permission: use PHP to import nodes
  $permissions['use PHP to import nodes'] = array(
    'name' => 'use PHP to import nodes',
    'roles' => array(),
  );

  return $permissions;
}
