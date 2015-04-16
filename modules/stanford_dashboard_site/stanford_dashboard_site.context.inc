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
        'views-36b2b131e9da0e88a61b8b860852b63e' => array(
          'module' => 'views',
          'delta' => '36b2b131e9da0e88a61b8b860852b63e',
          'region' => 'content_top',
          'weight' => '-7',
        ),
        'views-51b26d48fb7b20d6cbb898c1af046a57' => array(
          'module' => 'views',
          'delta' => '51b26d48fb7b20d6cbb898c1af046a57',
          'region' => 'content_top',
          'weight' => '-6',
        ),
        'views-45ab2fde4f85ca38a600c68ff0beb47e' => array(
          'module' => 'views',
          'delta' => '45ab2fde4f85ca38a600c68ff0beb47e',
          'region' => 'content_top',
          'weight' => '-5',
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
        'views-deb1daea8cfbb5e8aa34388afcffb410' => array(
          'module' => 'views',
          'delta' => 'deb1daea8cfbb5e8aa34388afcffb410',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'views-e22682f33d009465cc9581c41bf01daf' => array(
          'module' => 'views',
          'delta' => 'e22682f33d009465cc9581c41bf01daf',
          'region' => 'content_top',
          'weight' => '-9',
        ),
        'views-b422ac617afd4df8def0c18313a90038' => array(
          'module' => 'views',
          'delta' => 'b422ac617afd4df8def0c18313a90038',
          'region' => 'content_top',
          'weight' => '-8',
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
