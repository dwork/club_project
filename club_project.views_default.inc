<?php
/**
 * @file
 * club_project.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function club_project_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'map_to_project';
  $view->description = 'Display Project details';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Map to Project';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Project Map';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_project_chair_user']['id'] = 'reverse_field_project_chair_user';
  $handler->display->display_options['relationships']['reverse_field_project_chair_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_project_chair_user']['field'] = 'reverse_field_project_chair_user';
  $handler->display->display_options['relationships']['reverse_field_project_chair_user']['required'] = 0;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'reverse_field_project_chair_user';
  $handler->display->display_options['relationships']['profile']['required'] = 0;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Title : [title] ';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_project_type']['id'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['fields']['field_project_type']['field'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['label'] = '';
  $handler->display->display_options['fields']['field_project_type']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_project_type']['alter']['text'] = 'Project Type: [field_project_type]';
  $handler->display->display_options['fields']['field_project_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_type']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_project_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_type']['field_api_classes'] = 0;
  /* Field: First Name (hidden) */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'reverse_field_project_chair_user';
  $handler->display->display_options['fields']['field_first_name']['ui_name'] = 'First Name (hidden)';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_first_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_first_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_first_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_first_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_first_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_first_name']['field_api_classes'] = 0;
  /* Field: Middle Name (hidden) */
  $handler->display->display_options['fields']['field_middle_initial']['id'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['table'] = 'field_data_field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['field'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['relationship'] = 'reverse_field_project_chair_user';
  $handler->display->display_options['fields']['field_middle_initial']['ui_name'] = 'Middle Name (hidden)';
  $handler->display->display_options['fields']['field_middle_initial']['label'] = '';
  $handler->display->display_options['fields']['field_middle_initial']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_middle_initial']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_middle_initial']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_middle_initial']['field_api_classes'] = 0;
  /* Field: Last Name (hidden) */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'reverse_field_project_chair_user';
  $handler->display->display_options['fields']['field_last_name']['ui_name'] = 'Last Name (hidden)';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_last_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_last_name']['field_api_classes'] = 0;
  /* Field: Suffix (hidden) */
  $handler->display->display_options['fields']['field_suffix']['id'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['table'] = 'field_data_field_suffix';
  $handler->display->display_options['fields']['field_suffix']['field'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['relationship'] = 'reverse_field_project_chair_user';
  $handler->display->display_options['fields']['field_suffix']['ui_name'] = 'Suffix (hidden)';
  $handler->display->display_options['fields']['field_suffix']['label'] = '';
  $handler->display->display_options['fields']['field_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_suffix']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_suffix']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_suffix']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_suffix']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_suffix']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_suffix']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_suffix']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_suffix']['field_api_classes'] = 0;
  /* Field: Concatenated Member Name */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Concatenated Member Name';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Member Name';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '[field_first_name] [field_middle_initial] [field_last_name] [field_suffix]';
  $handler->display->display_options['fields']['nothing_3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_3']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_3']['hide_alter_empty'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = 'Website : [field_website] ';
  $handler->display->display_options['fields']['field_website']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_website']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_website']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_website']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['field_api_classes'] = 0;
  /* Field: Content: Project Address */
  $handler->display->display_options['fields']['field_project_address']['id'] = 'field_project_address';
  $handler->display->display_options['fields']['field_project_address']['table'] = 'field_data_field_project_address';
  $handler->display->display_options['fields']['field_project_address']['field'] = 'field_project_address';
  $handler->display->display_options['fields']['field_project_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_address']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_address']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_address']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_project_address']['settings'] = array(
    'view_mode' => '',
  );
  $handler->display->display_options['fields']['field_project_address']['group_column'] = '';
  $handler->display->display_options['fields']['field_project_address']['field_api_classes'] = 0;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
    'project' => 'project',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'project-map';
  $export['map_to_project'] = $view;

  $view = new view;
  $view->name = 'project_detaiils';
  $view->description = 'Display Project details';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Project Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Project Details';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_album_target_id']['id'] = 'field_album_target_id';
  $handler->display->display_options['relationships']['field_album_target_id']['table'] = 'field_data_field_album';
  $handler->display->display_options['relationships']['field_album_target_id']['field'] = 'field_album_target_id';
  $handler->display->display_options['relationships']['field_album_target_id']['required'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Club/Chapter (hidden) */
  $handler->display->display_options['fields']['field_chapter']['id'] = 'field_chapter';
  $handler->display->display_options['fields']['field_chapter']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['fields']['field_chapter']['field'] = 'field_chapter';
  $handler->display->display_options['fields']['field_chapter']['ui_name'] = 'Club/Chapter (hidden)';
  $handler->display->display_options['fields']['field_chapter']['label'] = '';
  $handler->display->display_options['fields']['field_chapter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_chapter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_chapter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_chapter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_chapter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_chapter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_chapter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_chapter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_chapter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_chapter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_chapter']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_chapter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_chapter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_chapter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_chapter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_chapter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_chapter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_chapter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_chapter']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_chapter']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_chapter']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Title : [title] ';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_project_type']['id'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['fields']['field_project_type']['field'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['label'] = '';
  $handler->display->display_options['fields']['field_project_type']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_project_type']['alter']['text'] = 'Project Type: [field_project_type]';
  $handler->display->display_options['fields']['field_project_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_type']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_project_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_type']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = 'Website : [field_website] ';
  $handler->display->display_options['fields']['field_website']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_website']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_website']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_website']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['field_api_classes'] = 0;
  /* Field: Content: Private */
  $handler->display->display_options['fields']['field_private']['id'] = 'field_private';
  $handler->display->display_options['fields']['field_private']['table'] = 'field_data_field_private';
  $handler->display->display_options['fields']['field_private']['field'] = 'field_private';
  $handler->display->display_options['fields']['field_private']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_private']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_private']['alter']['text'] = '( [field_private] )';
  $handler->display->display_options['fields']['field_private']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_private']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_private']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_private']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_private']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_private']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_private']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_private']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_private']['field_api_classes'] = 0;
  /* Field: Content: Purpose */
  $handler->display->display_options['fields']['field_phone_number_purpose']['id'] = 'field_phone_number_purpose';
  $handler->display->display_options['fields']['field_phone_number_purpose']['table'] = 'field_data_field_phone_number_purpose';
  $handler->display->display_options['fields']['field_phone_number_purpose']['field'] = 'field_phone_number_purpose';
  $handler->display->display_options['fields']['field_phone_number_purpose']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_phone_number_purpose']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['field_api_classes'] = 0;
  /* Field: Check Phone# Fields */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['ui_name'] = 'Check Phone# Fields';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php_2']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
if (isset( $data->field_field_phone[0])) {
    print "Phone: " . $data->field_field_phone[0][\'rendered\'][\'#markup\'];
    if (isset($data->field_field_private[0])) {
       print \' (\' . $data->field_field_private[0][\'rendered\'][\'#markup\'] . \')\';
   }
   if (isset($data->field_field_phone_number_purpose[0])) {
       print " : " . $data->field_field_phone_number_purpose[0][\'raw\'][\'safe_value\'];
   }
}
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Project Chair */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Project Chair';
  $handler->display->display_options['fields']['php_1']['label'] = 'Project Chair';
  $handler->display->display_options['fields']['php_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['php_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$name = \'\';
$line = \'\';
$query = new EntityFieldQuery;
  $query
    ->entityCondition(\'entity_type\', \'user\')
    ->propertyCondition(\'status\', 1)
    ->propertyCondition(\'uid\',1,\'<>\')
    ->fieldCondition(\'field_project_chair\',\'target_id\',$row->nid,\'=\');
  $result = $query->execute();
  if (isset($result[\'user\'])) {
    $users = user_load_multiple(array_keys($result[\'user\']));
    foreach ($users as $user) {
       $name .= club_base_user_name($user) . "\\n";
       $ph = club_base_get_phone ($user->uid);   // number, location, type
       $ph = array();
       if (!empty($ph)) {
         foreach($ph as $phone) {
           $line .= $phone[\'location\']." : ". $phone[\'number\'] . "; ";
         }
       }
     }
     print $name . "<BR> &nbsp; &nbsp; &nbsp; " .  $line;
  }
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Project/Committee Member list */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Project/Committee Member list';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['php']['alter']['text'] = '<table><tr><th>Project Members</th></tr>
<tr><td>[php]</td></tr>
</table>';
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 1;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 1;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$name = \'\';
$query = new EntityFieldQuery;
  $query
    ->entityCondition(\'entity_type\', \'user\')
    ->propertyCondition(\'status\', 1)
    ->propertyCondition(\'uid\',1,\'<>\')
    ->fieldCondition(\'field_project_member\',\'target_id\',$row->nid,\'=\');
  $result = $query->execute();
  $users = user_load_multiple(array_keys($result[\'user\']));
  foreach ($users as $user) {
    $name .= club_base_user_name($user) . "\\n";
  }
return $name;';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Project Address */
  $handler->display->display_options['fields']['field_project_address_1']['id'] = 'field_project_address_1';
  $handler->display->display_options['fields']['field_project_address_1']['table'] = 'field_data_field_project_address';
  $handler->display->display_options['fields']['field_project_address_1']['field'] = 'field_project_address';
  $handler->display->display_options['fields']['field_project_address_1']['label'] = '';
  $handler->display->display_options['fields']['field_project_address_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_address_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_address_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_address_1']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_project_address_1']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_project_address_1']['field_api_classes'] = 0;
  /* Field: Content: Album Cover */
  $handler->display->display_options['fields']['field_album_cover_full']['id'] = 'field_album_cover_full';
  $handler->display->display_options['fields']['field_album_cover_full']['table'] = 'field_data_field_album_cover_full';
  $handler->display->display_options['fields']['field_album_cover_full']['field'] = 'field_album_cover_full';
  $handler->display->display_options['fields']['field_album_cover_full']['relationship'] = 'field_album_target_id';
  $handler->display->display_options['fields']['field_album_cover_full']['label'] = '';
  $handler->display->display_options['fields']['field_album_cover_full']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_album_cover_full']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_album_cover_full']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_album_cover_full']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_album_cover_full']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_album_cover_full']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_album_cover_full']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['relationship'] = 'field_album_target_id';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body_1']['alter']['text'] = '[body_1] ... Click here: ';
  $handler->display->display_options['fields']['body_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body_1']['element_type'] = '0';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body_1']['hide_empty'] = 1;
  $handler->display->display_options['fields']['body_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body_1']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body_1']['field_api_classes'] = 0;
  /* Field: Content: Album */
  $handler->display->display_options['fields']['field_album']['id'] = 'field_album';
  $handler->display->display_options['fields']['field_album']['table'] = 'field_data_field_album';
  $handler->display->display_options['fields']['field_album']['field'] = 'field_album';
  $handler->display->display_options['fields']['field_album']['label'] = 'Click to see Album';
  $handler->display->display_options['fields']['field_album']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_album']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_album']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_album']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_album']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_album']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_album']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_album']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_album']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_album']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_album']['field_api_classes'] = 0;
  /* Field: Album cover + description of album */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Album cover + description of album';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<table><tr><td>[field_album_cover_full]</td><td>[body_1] [field_album]</td></table>';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'display:inline';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nothing_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_2']['hide_alter_empty'] = 0;
  /* Field: ( Return to Projects) Link */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '( Return to Projects) Link';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Return to Projects';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'projects';
  $handler->display->display_options['fields']['nothing_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
    'project' => 'project',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'project-details';
  $export['project_detaiils'] = $view;

  $view = new view;
  $view->name = 'projects';
  $view->description = 'List of Projects';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Projects List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Projects List';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_project_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_project_type' => 'field_project_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Content: Project Type (field_project_type) */
  $handler->display->display_options['relationships']['field_project_type_tid']['id'] = 'field_project_type_tid';
  $handler->display->display_options['relationships']['field_project_type_tid']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['relationships']['field_project_type_tid']['field'] = 'field_project_type_tid';
  $handler->display->display_options['relationships']['field_project_type_tid']['required'] = 1;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_project_chair_user']['id'] = 'reverse_field_project_chair_user';
  $handler->display->display_options['relationships']['reverse_field_project_chair_user']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_project_chair_user']['field'] = 'reverse_field_project_chair_user';
  $handler->display->display_options['relationships']['reverse_field_project_chair_user']['required'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'project-details/[nid]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_project_type']['id'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['fields']['field_project_type']['field'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_type']['field_api_classes'] = 0;
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'reverse_field_project_chair_user';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_first_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_first_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_first_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_first_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_first_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_first_name']['field_api_classes'] = 0;
  /* Field: Middle Name (hidden) */
  $handler->display->display_options['fields']['field_middle_initial']['id'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['table'] = 'field_data_field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['field'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['relationship'] = 'reverse_field_project_chair_user';
  $handler->display->display_options['fields']['field_middle_initial']['ui_name'] = 'Middle Name (hidden)';
  $handler->display->display_options['fields']['field_middle_initial']['label'] = '';
  $handler->display->display_options['fields']['field_middle_initial']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_middle_initial']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_middle_initial']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_middle_initial']['field_api_classes'] = 0;
  /* Field: Last Name (hidden) */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'reverse_field_project_chair_user';
  $handler->display->display_options['fields']['field_last_name']['ui_name'] = 'Last Name (hidden)';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_last_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_last_name']['field_api_classes'] = 0;
  /* Field: Suffix (hidden) */
  $handler->display->display_options['fields']['field_suffix']['id'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['table'] = 'field_data_field_suffix';
  $handler->display->display_options['fields']['field_suffix']['field'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['relationship'] = 'reverse_field_project_chair_user';
  $handler->display->display_options['fields']['field_suffix']['ui_name'] = 'Suffix (hidden)';
  $handler->display->display_options['fields']['field_suffix']['label'] = '';
  $handler->display->display_options['fields']['field_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_suffix']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_suffix']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_suffix']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_suffix']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_suffix']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_suffix']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_suffix']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_suffix']['field_api_classes'] = 0;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'reverse_field_project_chair_user';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 1;
  /* Field: Committee/Project Chair name &amp; email */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Committee/Project Chair name & email';
  $handler->display->display_options['fields']['nothing']['label'] = 'Chair';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_first_name] [field_middle_initial] [field_last_name] [field_suffix]
[mail]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Contextual filter: Field: Chapter/Club (field_chapter) */
  $handler->display->display_options['arguments']['field_chapter_target_id']['id'] = 'field_chapter_target_id';
  $handler->display->display_options['arguments']['field_chapter_target_id']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['arguments']['field_chapter_target_id']['field'] = 'field_chapter_target_id';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_options']['code'] = 'if (function_exists(\'club_base_get_chapter\')) { 
  return club_base_get_chapter();
} else {
  drupal_set_message(t(\'Error: function "club_base_get_chapter" not found; make sure "club_base" module is installed and activated\'));
}';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_chapter_target_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_chapter_target_id']['not'] = 0;
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
    'project' => 'project',
  );
  /* Filter criterion: Content: Project Type (field_project_type) */
  $handler->display->display_options['filters']['field_project_type_tid']['id'] = 'field_project_type_tid';
  $handler->display->display_options['filters']['field_project_type_tid']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['filters']['field_project_type_tid']['field'] = 'field_project_type_tid';
  $handler->display->display_options['filters']['field_project_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_type_tid']['expose']['operator_id'] = 'field_project_type_tid_op';
  $handler->display->display_options['filters']['field_project_type_tid']['expose']['label'] = 'Project Type';
  $handler->display->display_options['filters']['field_project_type_tid']['expose']['operator'] = 'field_project_type_tid_op';
  $handler->display->display_options['filters']['field_project_type_tid']['expose']['identifier'] = 'field_project_type_tid';
  $handler->display->display_options['filters']['field_project_type_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_project_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_project_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_project_type_tid']['vocabulary'] = 'project_type';
  $handler->display->display_options['filters']['field_project_type_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_project_type_tid']['error_message'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'projects';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Projects';
  $handler->display->display_options['menu']['description'] = 'Projects and Committees';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['projects'] = $view;

  return $export;
}
