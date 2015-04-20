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
  $view->name = 'stanford_dashboard_site_at_a_glance';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Stanford Dashboard Site: at a glance';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_site_users_node']['id'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['relationships']['reverse_field_s_site_users_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_s_site_users_node']['field'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['relationships']['reverse_field_s_site_users_node']['required'] = TRUE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['relationship'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'Type term';
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
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid_1']['id'] = 'term_node_tid_1';
  $handler->display->display_options['relationships']['term_node_tid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_1']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_1']['relationship'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['relationships']['term_node_tid_1']['label'] = 'status term';
  $handler->display->display_options['relationships']['term_node_tid_1']['vocabularies'] = array(
    'stanford_dashboard_site_status' => 'stanford_dashboard_site_status',
    'stanford_event_type' => 0,
    'stanford_faculty_type' => 0,
    'stanford_field_of_study' => 0,
    'stanford_interests' => 0,
    'news_categories' => 0,
    'publication_type' => 0,
    'stanford_dashboard_site_type' => 0,
    'stanford_slide_category' => 0,
    'stanford_staff_type' => 0,
    'stanford_event_audience' => 0,
    'stanford_event_categories' => 0,
    'stanford_student_type' => 0,
    'tags' => 0,
  );
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_s_site_type']['id'] = 'field_s_site_type';
  $handler->display->display_options['fields']['field_s_site_type']['table'] = 'field_data_field_s_site_type';
  $handler->display->display_options['fields']['field_s_site_type']['field'] = 'field_s_site_type';
  $handler->display->display_options['fields']['field_s_site_type']['relationship'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['fields']['field_s_site_type']['label'] = '';
  $handler->display->display_options['fields']['field_s_site_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_site_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_site_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_site_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_site_type']['separator'] = ',';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'term_node_tid_1';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/dashboard/sites?title=&field_s_site_type_tid=[tid]&field_s_site_status_tid=[tid_1]">[nid] [field_s_site_type]</a>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Status (field_s_site_status) */
  $handler->display->display_options['arguments']['field_s_site_status_tid']['id'] = 'field_s_site_status_tid';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['table'] = 'field_data_field_s_site_status';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['field'] = 'field_s_site_status_tid';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['relationship'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['default_argument_options']['argument'] = '22';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_s_site_status_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['validate_options']['vocabularies'] = array(
    'stanford_dashboard_site_status' => 'stanford_dashboard_site_status',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Up Block */
  $handler = $view->new_display('block', 'Up Block', 'up_block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Status (field_s_site_status) */
  $handler->display->display_options['arguments']['field_s_site_status_tid']['id'] = 'field_s_site_status_tid';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['table'] = 'field_data_field_s_site_status';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['field'] = 'field_s_site_status_tid';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['relationship'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['default_argument_options']['argument'] = '20';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_s_site_status_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['validate_options']['vocabularies'] = array(
    'stanford_dashboard_site_status' => 'stanford_dashboard_site_status',
  );

  /* Display: Paused Block */
  $handler = $view->new_display('block', 'Paused Block', 'paused_block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Status (field_s_site_status) */
  $handler->display->display_options['arguments']['field_s_site_status_tid']['id'] = 'field_s_site_status_tid';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['table'] = 'field_data_field_s_site_status';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['field'] = 'field_s_site_status_tid';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['relationship'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['default_argument_options']['argument'] = '22';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_s_site_status_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['validate_options']['vocabularies'] = array(
    'stanford_dashboard_site_status' => 'stanford_dashboard_site_status',
  );

  /* Display: Down Block */
  $handler = $view->new_display('block', 'Down Block', 'down_block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Status (field_s_site_status) */
  $handler->display->display_options['arguments']['field_s_site_status_tid']['id'] = 'field_s_site_status_tid';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['table'] = 'field_data_field_s_site_status';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['field'] = 'field_s_site_status_tid';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['relationship'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['default_argument_options']['argument'] = '21';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_s_site_status_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['validate_options']['vocabularies'] = array(
    'stanford_dashboard_site_status' => 'stanford_dashboard_site_status',
  );

  /* Display: Status Attachment */
  $handler = $view->new_display('attachment', 'Status Attachment', 'status_attachment');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Status) */
  $handler->display->display_options['fields']['field_s_site_status']['id'] = 'field_s_site_status';
  $handler->display->display_options['fields']['field_s_site_status']['table'] = 'field_data_field_s_site_status';
  $handler->display->display_options['fields']['field_s_site_status']['field'] = 'field_s_site_status';
  $handler->display->display_options['fields']['field_s_site_status']['relationship'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['fields']['field_s_site_status']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_s_site_status']['label'] = '';
  $handler->display->display_options['fields']['field_s_site_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_site_status']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_s_site_status_1']['id'] = 'field_s_site_status_1';
  $handler->display->display_options['fields']['field_s_site_status_1']['table'] = 'field_data_field_s_site_status';
  $handler->display->display_options['fields']['field_s_site_status_1']['field'] = 'field_s_site_status';
  $handler->display->display_options['fields']['field_s_site_status_1']['relationship'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['fields']['field_s_site_status_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_site_status_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_site_status_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_site_status_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid_1';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3><a href="/dashboard/sites?title=&field_s_site_status_tid=[tid]">[field_s_site_status] [field_s_site_status_1]</a></h3>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'up_block' => 'up_block',
    'paused_block' => 'paused_block',
    'down_block' => 'down_block',
    'default' => 0,
  );
  $export['stanford_dashboard_site_at_a_glance'] = $view;

  $view = new view();
  $view->name = 'stanford_dashboard_site_by_user';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Stanford Dashboard Site: by user';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sites';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    9 => '9',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_s_site_family',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_s_site_type_1' => 'field_s_site_type_1',
    'field_s_site_status' => 'field_s_site_status',
    'title' => 'title',
    'field_s_site_url' => 'title',
    'field_s_site_type' => 'field_s_site_type',
    'field_s_site_response_time' => 'field_s_site_response_time',
    'field_s_site_alert' => 'field_s_site_alert',
    'field_s_site_family' => 'field_s_site_family',
    'edit_node' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_s_site_type_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
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
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_s_site_url' => array(
      'sortable' => 0,
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
    'field_s_site_family' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_site_users_node']['id'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['relationships']['reverse_field_s_site_users_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_s_site_users_node']['field'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['relationships']['reverse_field_s_site_users_node']['required'] = TRUE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['relationship'] = 'reverse_field_s_site_users_node';
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
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_s_site_type_1']['id'] = 'field_s_site_type_1';
  $handler->display->display_options['fields']['field_s_site_type_1']['table'] = 'field_data_field_s_site_type';
  $handler->display->display_options['fields']['field_s_site_type_1']['field'] = 'field_s_site_type';
  $handler->display->display_options['fields']['field_s_site_type_1']['relationship'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['fields']['field_s_site_type_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_site_type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_site_type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_site_type_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_s_site_status']['id'] = 'field_s_site_status';
  $handler->display->display_options['fields']['field_s_site_status']['table'] = 'field_data_field_s_site_status';
  $handler->display->display_options['fields']['field_s_site_status']['field'] = 'field_s_site_status';
  $handler->display->display_options['fields']['field_s_site_status']['relationship'] = 'reverse_field_s_site_users_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class="[field_s_site_type_1] "> [title] </span>';
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = '[field_s_site_type_1] ';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Site URL */
  $handler->display->display_options['fields']['field_s_site_url']['id'] = 'field_s_site_url';
  $handler->display->display_options['fields']['field_s_site_url']['table'] = 'field_data_field_s_site_url';
  $handler->display->display_options['fields']['field_s_site_url']['field'] = 'field_s_site_url';
  $handler->display->display_options['fields']['field_s_site_url']['relationship'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['fields']['field_s_site_url']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_s_site_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_s_site_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_site_url']['type'] = 'link_url';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_s_site_type']['id'] = 'field_s_site_type';
  $handler->display->display_options['fields']['field_s_site_type']['table'] = 'field_data_field_s_site_type';
  $handler->display->display_options['fields']['field_s_site_type']['field'] = 'field_s_site_type';
  $handler->display->display_options['fields']['field_s_site_type']['relationship'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['fields']['field_s_site_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_site_type']['alter']['text'] = '<span class="[field_s_site_type_1]"> [field_s_site_type]  </span>';
  /* Field: Content: Response time */
  $handler->display->display_options['fields']['field_s_site_response_time']['id'] = 'field_s_site_response_time';
  $handler->display->display_options['fields']['field_s_site_response_time']['table'] = 'field_data_field_s_site_response_time';
  $handler->display->display_options['fields']['field_s_site_response_time']['field'] = 'field_s_site_response_time';
  $handler->display->display_options['fields']['field_s_site_response_time']['relationship'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['fields']['field_s_site_response_time']['label'] = 'Response';
  $handler->display->display_options['fields']['field_s_site_response_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_site_response_time']['alter']['text'] = '[field_s_site_response_time]ms';
  $handler->display->display_options['fields']['field_s_site_response_time']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_s_site_response_time']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_s_site_response_time']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_site_response_time']['empty'] = 'N/A';
  $handler->display->display_options['fields']['field_s_site_response_time']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Alert */
  $handler->display->display_options['fields']['field_s_site_alert']['id'] = 'field_s_site_alert';
  $handler->display->display_options['fields']['field_s_site_alert']['table'] = 'field_data_field_s_site_alert';
  $handler->display->display_options['fields']['field_s_site_alert']['field'] = 'field_s_site_alert';
  $handler->display->display_options['fields']['field_s_site_alert']['relationship'] = 'reverse_field_s_site_users_node';
  /* Field: Content: Family */
  $handler->display->display_options['fields']['field_s_site_family']['id'] = 'field_s_site_family';
  $handler->display->display_options['fields']['field_s_site_family']['table'] = 'field_data_field_s_site_family';
  $handler->display->display_options['fields']['field_s_site_family']['field'] = 'field_s_site_family';
  $handler->display->display_options['fields']['field_s_site_family']['relationship'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['fields']['field_s_site_family']['label'] = '';
  $handler->display->display_options['fields']['field_s_site_family']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_site_family']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_site_family']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['field_s_site_family']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_site_family']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'reverse_field_s_site_users_node';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
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
  $handler->display->display_options['filters']['field_s_site_type_tid']['relationship'] = 'reverse_field_s_site_users_node';
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
  $handler->display->display_options['filters']['field_s_site_status_tid']['relationship'] = 'reverse_field_s_site_users_node';
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
  $handler->display->display_options['path'] = 'dashboard/sites';

  /* Display: Admin Page */
  $handler = $view->new_display('page', 'Admin Page', 'admin_page');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'reverse_field_s_site_users_node';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
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
  $handler->display->display_options['filters']['field_s_site_type_tid']['relationship'] = 'reverse_field_s_site_users_node';
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
  $handler->display->display_options['filters']['field_s_site_status_tid']['relationship'] = 'reverse_field_s_site_users_node';
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
  $handler->display->display_options['path'] = 'dashboard/sites/admin';
  $export['stanford_dashboard_site_by_user'] = $view;

  $view = new view();
  $view->name = 'stanford_dashboard_site_glance_for_admins';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Dashboard Site: at a glance for Admins';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'Status term';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'stanford_dashboard_site_status' => 'stanford_dashboard_site_status',
    'stanford_event_type' => 0,
    'stanford_faculty_type' => 0,
    'stanford_field_of_study' => 0,
    'stanford_interests' => 0,
    'news_categories' => 0,
    'publication_type' => 0,
    'stanford_dashboard_site_type' => 0,
    'stanford_slide_category' => 0,
    'stanford_staff_type' => 0,
    'stanford_event_audience' => 0,
    'stanford_event_categories' => 0,
    'stanford_student_type' => 0,
    'tags' => 0,
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid_1']['id'] = 'term_node_tid_1';
  $handler->display->display_options['relationships']['term_node_tid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_1']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_1']['label'] = 'Type term';
  $handler->display->display_options['relationships']['term_node_tid_1']['vocabularies'] = array(
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
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_s_site_type']['id'] = 'field_s_site_type';
  $handler->display->display_options['fields']['field_s_site_type']['table'] = 'field_data_field_s_site_type';
  $handler->display->display_options['fields']['field_s_site_type']['field'] = 'field_s_site_type';
  $handler->display->display_options['fields']['field_s_site_type']['label'] = '';
  $handler->display->display_options['fields']['field_s_site_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_site_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_site_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'term_node_tid_1';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  /* Field: Global: View rewrite */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: View rewrite';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/dashboard/sites/admin?title=&field_s_site_type_tid=[tid_1]&field_s_site_status_tid=[tid]">[nid] [field_s_site_type]</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Status (field_s_site_status) */
  $handler->display->display_options['arguments']['field_s_site_status_tid']['id'] = 'field_s_site_status_tid';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['table'] = 'field_data_field_s_site_status';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['field'] = 'field_s_site_status_tid';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['default_argument_options']['argument'] = '22';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_s_site_status_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['validate_options']['vocabularies'] = array(
    'stanford_dashboard_site_status' => 'stanford_dashboard_site_status',
  );
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

  /* Display: Up Block */
  $handler = $view->new_display('block', 'Up Block', 'up_block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Status (field_s_site_status) */
  $handler->display->display_options['arguments']['field_s_site_status_tid']['id'] = 'field_s_site_status_tid';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['table'] = 'field_data_field_s_site_status';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['field'] = 'field_s_site_status_tid';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['default_argument_options']['argument'] = '20';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_s_site_status_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['validate_options']['vocabularies'] = array(
    'stanford_dashboard_site_status' => 'stanford_dashboard_site_status',
  );

  /* Display: Status Attachment */
  $handler = $view->new_display('attachment', 'Status Attachment', 'status_attachment');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Status) */
  $handler->display->display_options['fields']['field_s_site_status']['id'] = 'field_s_site_status';
  $handler->display->display_options['fields']['field_s_site_status']['table'] = 'field_data_field_s_site_status';
  $handler->display->display_options['fields']['field_s_site_status']['field'] = 'field_s_site_status';
  $handler->display->display_options['fields']['field_s_site_status']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_s_site_status']['label'] = '';
  $handler->display->display_options['fields']['field_s_site_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_site_status']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_s_site_status_1']['id'] = 'field_s_site_status_1';
  $handler->display->display_options['fields']['field_s_site_status_1']['table'] = 'field_data_field_s_site_status';
  $handler->display->display_options['fields']['field_s_site_status_1']['field'] = 'field_s_site_status';
  $handler->display->display_options['fields']['field_s_site_status_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_site_status_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_site_status_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_site_status_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Global: View rewrite */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: View rewrite';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3><a href="/dashboard/sites/admin?title=&field_s_site_status_tid=[tid]">[field_s_site_status] [field_s_site_status_1]</a></h3>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'up_block' => 'up_block',
    'paused_block' => 'paused_block',
    'down_block' => 'down_block',
  );

  /* Display: Paused Block */
  $handler = $view->new_display('block', 'Paused Block', 'paused_block');

  /* Display: Down Block */
  $handler = $view->new_display('block', 'Down Block', 'down_block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Status (field_s_site_status) */
  $handler->display->display_options['arguments']['field_s_site_status_tid']['id'] = 'field_s_site_status_tid';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['table'] = 'field_data_field_s_site_status';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['field'] = 'field_s_site_status_tid';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['default_argument_options']['argument'] = '21';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_s_site_status_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_s_site_status_tid']['validate_options']['vocabularies'] = array(
    'stanford_dashboard_site_status' => 'stanford_dashboard_site_status',
  );
  $export['stanford_dashboard_site_glance_for_admins'] = $view;

  $view = new view();
  $view->name = 'stanford_dashboard_site_manage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Dashboard Site: Manage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Dashboard Site';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'status' => 'status',
    'changed' => 'changed',
    'name' => 'name',
    'field_s_site_family' => 'field_s_site_family',
    'field_s_site_users' => 'field_s_site_users',
    'field_s_site_id' => 'field_s_site_id',
    'field_s_site_type' => 'field_s_site_type',
    'field_s_site_url' => 'field_s_site_url',
    'field_s_site_report' => 'field_s_site_url',
    'nid' => 'nid',
    'edit_node' => 'edit_node',
    'view_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_site_family' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_site_users' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_site_id' => array(
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
    'field_s_site_url' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_s_site_report' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Row';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_convert_convert_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Modify',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'stanford_dashboard_site::field_s_site_type' => 'stanford_dashboard_site::field_s_site_type',
          'stanford_dashboard_site::field_s_site_users' => 'stanford_dashboard_site::field_s_site_users',
          'stanford_dashboard_site::field_s_site_family' => 'stanford_dashboard_site::field_s_site_family',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Publish',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Unpublish',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Family */
  $handler->display->display_options['fields']['field_s_site_family']['id'] = 'field_s_site_family';
  $handler->display->display_options['fields']['field_s_site_family']['table'] = 'field_data_field_s_site_family';
  $handler->display->display_options['fields']['field_s_site_family']['field'] = 'field_s_site_family';
  $handler->display->display_options['fields']['field_s_site_family']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Users */
  $handler->display->display_options['fields']['field_s_site_users']['id'] = 'field_s_site_users';
  $handler->display->display_options['fields']['field_s_site_users']['table'] = 'field_data_field_s_site_users';
  $handler->display->display_options['fields']['field_s_site_users']['field'] = 'field_s_site_users';
  $handler->display->display_options['fields']['field_s_site_users']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_s_site_users']['delta_offset'] = '0';
  /* Field: Content: ID */
  $handler->display->display_options['fields']['field_s_site_id']['id'] = 'field_s_site_id';
  $handler->display->display_options['fields']['field_s_site_id']['table'] = 'field_data_field_s_site_id';
  $handler->display->display_options['fields']['field_s_site_id']['field'] = 'field_s_site_id';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_s_site_type']['id'] = 'field_s_site_type';
  $handler->display->display_options['fields']['field_s_site_type']['table'] = 'field_data_field_s_site_type';
  $handler->display->display_options['fields']['field_s_site_type']['field'] = 'field_s_site_type';
  /* Field: Content: Site URL */
  $handler->display->display_options['fields']['field_s_site_url']['id'] = 'field_s_site_url';
  $handler->display->display_options['fields']['field_s_site_url']['table'] = 'field_data_field_s_site_url';
  $handler->display->display_options['fields']['field_s_site_url']['field'] = 'field_s_site_url';
  $handler->display->display_options['fields']['field_s_site_url']['label'] = 'Links';
  $handler->display->display_options['fields']['field_s_site_url']['click_sort_column'] = 'url';
  /* Field: Content: Report */
  $handler->display->display_options['fields']['field_s_site_report']['id'] = 'field_s_site_report';
  $handler->display->display_options['fields']['field_s_site_report']['table'] = 'field_data_field_s_site_report';
  $handler->display->display_options['fields']['field_s_site_report']['field'] = 'field_s_site_report';
  $handler->display->display_options['fields']['field_s_site_report']['click_sort_column'] = 'url';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Node ID';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* Filter criterion: Content: Status (field_s_site_status) */
  $handler->display->display_options['filters']['field_s_site_status_tid']['id'] = 'field_s_site_status_tid';
  $handler->display->display_options['filters']['field_s_site_status_tid']['table'] = 'field_data_field_s_site_status';
  $handler->display->display_options['filters']['field_s_site_status_tid']['field'] = 'field_s_site_status_tid';
  $handler->display->display_options['filters']['field_s_site_status_tid']['value'] = '';
  $handler->display->display_options['filters']['field_s_site_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_site_status_tid']['expose']['operator_id'] = 'field_s_site_status_tid_op';
  $handler->display->display_options['filters']['field_s_site_status_tid']['expose']['label'] = 'Status ';
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
  /* Filter criterion: Content: Type (field_s_site_type) */
  $handler->display->display_options['filters']['field_s_site_type_tid']['id'] = 'field_s_site_type_tid';
  $handler->display->display_options['filters']['field_s_site_type_tid']['table'] = 'field_data_field_s_site_type';
  $handler->display->display_options['filters']['field_s_site_type_tid']['field'] = 'field_s_site_type_tid';
  $handler->display->display_options['filters']['field_s_site_type_tid']['value'] = '';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/manage/site';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage Sites';
  $handler->display->display_options['menu']['weight'] = '';
  $handler->display->display_options['menu']['name'] = 'menu-manage-content-by-type';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['stanford_dashboard_site_manage'] = $view;

  $view = new view();
  $view->name = 'stanford_dashboard_site_production_sites';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Dashboard Site: Production sites';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Stanford Dashboard Site: Production sites';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  /* Filter criterion: Content: Type (field_s_site_type) */
  $handler->display->display_options['filters']['field_s_site_type_tid']['id'] = 'field_s_site_type_tid';
  $handler->display->display_options['filters']['field_s_site_type_tid']['table'] = 'field_data_field_s_site_type';
  $handler->display->display_options['filters']['field_s_site_type_tid']['field'] = 'field_s_site_type_tid';
  $handler->display->display_options['filters']['field_s_site_type_tid']['value'] = array(
    23 => '23',
  );
  $handler->display->display_options['filters']['field_s_site_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_site_type_tid']['vocabulary'] = 'stanford_dashboard_site_type';
  $handler->display->display_options['filters']['field_s_site_type_tid']['hierarchy'] = 1;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Production Sites';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['stanford_dashboard_site_production_sites'] = $view;

  return $export;
}
