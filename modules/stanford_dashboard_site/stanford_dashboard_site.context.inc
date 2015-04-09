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
  $context->name = 'dashboard_site_user';
  $context->description = 'Site dashboard for a user';
  $context->tag = 'dashboard';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'dashboard/sites' => 'dashboard/sites',
        'dashboard/sites/*' => 'dashboard/sites/*',
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
