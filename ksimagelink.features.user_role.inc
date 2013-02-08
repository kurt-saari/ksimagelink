<?php
/**
 * @file
 * ksimagelink.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ksimagelink_user_default_roles() {
  $roles = array();

  // Exported role: ksimagelink.
  $roles['ksimagelink'] = array(
    'name' => 'ksimagelink',
    'weight' => '3',
  );

  return $roles;
}
