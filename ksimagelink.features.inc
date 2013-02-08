<?php
/**
 * @file
 * ksimagelink.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ksimagelink_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ksimagelink_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ksimagelink_node_info() {
  $items = array(
    'ksimagelink' => array(
      'name' => t('Website Link'),
      'base' => 'node_content',
      'description' => t('KSIL Image Link'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('Use this page to add new links to websites.  Copy an image and the link and press "Save".'),
    ),
  );
  return $items;
}
