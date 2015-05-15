<?php
/**
 * @file
 * stanford_dashboard_site.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_dashboard_site_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dashboard_site_admin';
  $context->description = 'Site dashboard for admins';
  $context->tag = 'dashboard';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'dashboard/sites/admin' => 'dashboard/sites/admin',
        'dashboard/sites/admin/*' => 'dashboard/sites/admin/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-b371b45a0117e38782d2c3b08c235478' => array(
          'module' => 'views',
          'delta' => 'b371b45a0117e38782d2c3b08c235478',
          'region' => 'content_upper',
          'weight' => '-10',
        ),
        'views-4872cfb79016baf6f510b3ca2da98c61' => array(
          'module' => 'views',
          'delta' => '4872cfb79016baf6f510b3ca2da98c61',
          'region' => 'content_upper',
          'weight' => '-9',
        ),
        'views-1c7452c67ae0705c0939baa47d0cd496' => array(
          'module' => 'views',
          'delta' => '1c7452c67ae0705c0939baa47d0cd496',
          'region' => 'content_upper',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Site dashboard for admins');
  t('dashboard');
  $export['dashboard_site_admin'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dashboard_site_user';
  $context->description = 'Site dashboard for a user';
  $context->tag = 'dashboard';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'dashboard/sites' => 'dashboard/sites',
        'dashboard/sites/*' => 'dashboard/sites/*',
        '~dashboard/sites/admin' => '~dashboard/sites/admin',
        '~dashboard/sites/admin/*' => '~dashboard/sites/admin/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'views-deb1daea8cfbb5e8aa34388afcffb410' => array(
          'module' => 'views',
          'delta' => 'deb1daea8cfbb5e8aa34388afcffb410',
          'region' => 'content_top',
          'weight' => '-9',
        ),
        'views-e22682f33d009465cc9581c41bf01daf' => array(
          'module' => 'views',
          'delta' => 'e22682f33d009465cc9581c41bf01daf',
          'region' => 'content_top',
          'weight' => '-8',
        ),
        'views-b422ac617afd4df8def0c18313a90038' => array(
          'module' => 'views',
          'delta' => 'b422ac617afd4df8def0c18313a90038',
          'region' => 'content_top',
          'weight' => '-7',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'content_top',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Site dashboard for a user');
  t('dashboard');
  $export['dashboard_site_user'] = $context;

  return $export;
}
