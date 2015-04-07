<?php
/**
 * @file
 * stanford_dashboard_site.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_dashboard_site_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'site_hosting_dashboard';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Site Hosting Dashboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Site Hosting Dashboard';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_s_site_status' => 'field_s_site_status',
    'title' => 'title',
    'field_s_site_type' => 'field_s_site_type',
    'field_s_site_response_time' => 'field_s_site_response_time',
    'field_s_site_alert' => 'field_s_site_alert',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_s_site_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_site_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_site_response_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_site_alert' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'stanford_dashboard_site_type' => 'stanford_dashboard_site_type',
    'stanford_event_type' => 0,
    'stanford_faculty_type' => 0,
    'stanford_field_of_study' => 0,
    'stanford_interests' => 0,
    'news_categories' => 0,
    'publication_type' => 0,
    'stanford_dashboard_site_status' => 0,
    'stanford_slide_category' => 0,
    'stanford_staff_type' => 0,
    'stanford_event_audience' => 0,
    'stanford_event_categories' => 0,
    'stanford_student_type' => 0,
    'tags' => 0,
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_s_site_status']['id'] = 'field_s_site_status';
  $handler->display->display_options['fields']['field_s_site_status']['table'] = 'field_data_field_s_site_status';
  $handler->display->display_options['fields']['field_s_site_status']['field'] = 'field_s_site_status';
  $handler->display->display_options['fields']['field_s_site_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_s_site_type']['id'] = 'field_s_site_type';
  $handler->display->display_options['fields']['field_s_site_type']['table'] = 'field_data_field_s_site_type';
  $handler->display->display_options['fields']['field_s_site_type']['field'] = 'field_s_site_type';
  $handler->display->display_options['fields']['field_s_site_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Response time */
  $handler->display->display_options['fields']['field_s_site_response_time']['id'] = 'field_s_site_response_time';
  $handler->display->display_options['fields']['field_s_site_response_time']['table'] = 'field_data_field_s_site_response_time';
  $handler->display->display_options['fields']['field_s_site_response_time']['field'] = 'field_s_site_response_time';
  $handler->display->display_options['fields']['field_s_site_response_time']['label'] = 'Response';
  $handler->display->display_options['fields']['field_s_site_response_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_site_response_time']['alter']['text'] = '[field_s_site_response_time]ms';
  $handler->display->display_options['fields']['field_s_site_response_time']['empty'] = 'N/A';
  $handler->display->display_options['fields']['field_s_site_response_time']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Alert */
  $handler->display->display_options['fields']['field_s_site_alert']['id'] = 'field_s_site_alert';
  $handler->display->display_options['fields']['field_s_site_alert']['table'] = 'field_data_field_s_site_alert';
  $handler->display->display_options['fields']['field_s_site_alert']['field'] = 'field_s_site_alert';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
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
    'stanford_dashboard_site' => 'stanford_dashboard_site',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    9 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Type (field_s_site_type) */
  $handler->display->display_options['filters']['field_s_site_type_tid']['id'] = 'field_s_site_type_tid';
  $handler->display->display_options['filters']['field_s_site_type_tid']['table'] = 'field_data_field_s_site_type';
  $handler->display->display_options['filters']['field_s_site_type_tid']['field'] = 'field_s_site_type_tid';
  $handler->display->display_options['filters']['field_s_site_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_site_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_site_type_tid']['expose']['operator_id'] = 'field_s_site_type_tid_op';
  $handler->display->display_options['filters']['field_s_site_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_s_site_type_tid']['expose']['operator'] = 'field_s_site_type_tid_op';
  $handler->display->display_options['filters']['field_s_site_type_tid']['expose']['identifier'] = 'field_s_site_type_tid';
  $handler->display->display_options['filters']['field_s_site_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    9 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_s_site_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_site_type_tid']['vocabulary'] = 'stanford_dashboard_site_type';
  $handler->display->display_options['filters']['field_s_site_type_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Status (field_s_site_status) */
  $handler->display->display_options['filters']['field_s_site_status_tid']['id'] = 'field_s_site_status_tid';
  $handler->display->display_options['filters']['field_s_site_status_tid']['table'] = 'field_data_field_s_site_status';
  $handler->display->display_options['filters']['field_s_site_status_tid']['field'] = 'field_s_site_status_tid';
  $handler->display->display_options['filters']['field_s_site_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_site_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_site_status_tid']['expose']['operator_id'] = 'field_s_site_status_tid_op';
  $handler->display->display_options['filters']['field_s_site_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_s_site_status_tid']['expose']['operator'] = 'field_s_site_status_tid_op';
  $handler->display->display_options['filters']['field_s_site_status_tid']['expose']['identifier'] = 'field_s_site_status_tid';
  $handler->display->display_options['filters']['field_s_site_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    9 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_s_site_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_site_status_tid']['vocabulary'] = 'stanford_dashboard_site_status';
  $handler->display->display_options['filters']['field_s_site_status_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'dashboard/site-hosting';
  $export['site_hosting_dashboard'] = $view;

  return $export;
}
