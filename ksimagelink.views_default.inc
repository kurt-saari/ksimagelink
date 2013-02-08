<?php
/**
 * @file
 * ksimagelink.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ksimagelink_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'ksil_grid';
  $view->description = 'Grid view for KS Image Link Feature';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KSIL Grid';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Caroline\'s Links';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: KSIL Link (url hidden) */
  $handler->display->display_options['fields']['field_ksil_link_1']['id'] = 'field_ksil_link_1';
  $handler->display->display_options['fields']['field_ksil_link_1']['table'] = 'field_data_field_ksil_link';
  $handler->display->display_options['fields']['field_ksil_link_1']['field'] = 'field_ksil_link';
  $handler->display->display_options['fields']['field_ksil_link_1']['ui_name'] = 'Content: KSIL Link (url hidden)';
  $handler->display->display_options['fields']['field_ksil_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_ksil_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ksil_link_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ksil_link_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ksil_link_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ksil_link_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ksil_link_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ksil_link_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ksil_link_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ksil_link_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ksil_link_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ksil_link_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ksil_link_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ksil_link_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ksil_link_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ksil_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ksil_link_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ksil_link_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ksil_link_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ksil_link_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ksil_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ksil_link_1']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_ksil_link_1']['field_api_classes'] = 0;
  /* Field: Content: Website Image */
  $handler->display->display_options['fields']['field_ksil_image']['id'] = 'field_ksil_image';
  $handler->display->display_options['fields']['field_ksil_image']['table'] = 'field_data_field_ksil_image';
  $handler->display->display_options['fields']['field_ksil_image']['field'] = 'field_ksil_image';
  $handler->display->display_options['fields']['field_ksil_image']['label'] = '';
  $handler->display->display_options['fields']['field_ksil_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ksil_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_ksil_image']['alter']['path'] = '[field_ksil_link_1]';
  $handler->display->display_options['fields']['field_ksil_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ksil_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ksil_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ksil_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ksil_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ksil_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ksil_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ksil_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ksil_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ksil_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ksil_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ksil_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ksil_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ksil_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ksil_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ksil_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ksil_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ksil_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ksil_image']['field_api_classes'] = 0;
  /* Field: Content: Website Link */
  $handler->display->display_options['fields']['field_ksil_link']['id'] = 'field_ksil_link';
  $handler->display->display_options['fields']['field_ksil_link']['table'] = 'field_data_field_ksil_link';
  $handler->display->display_options['fields']['field_ksil_link']['field'] = 'field_ksil_link';
  $handler->display->display_options['fields']['field_ksil_link']['label'] = '';
  $handler->display->display_options['fields']['field_ksil_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ksil_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ksil_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ksil_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ksil_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ksil_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ksil_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ksil_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ksil_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ksil_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ksil_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ksil_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ksil_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ksil_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ksil_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ksil_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ksil_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ksil_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ksil_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ksil_link']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_ksil_link']['field_api_classes'] = 0;
  /* Field: Content: Edit link (hidden) */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['ui_name'] = 'Content: Edit link (hidden)';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'field_ksil_link_1' => 0,
    'field_ksil_image' => 0,
    'field_ksil_link' => 0,
  );
  $handler->display->display_options['fields']['contextual_links']['destination'] = '1';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ksimagelink' => 'ksimagelink',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'caroline';
  $export['ksil_grid'] = $view;

  return $export;
}
