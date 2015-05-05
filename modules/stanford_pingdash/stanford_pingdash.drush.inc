<?php
/**
 * @file
 * drush commands for stanford_pingdash.
 */

/**
 * Implements hook_drush_command().
 *
 * @return array List of drush commands.
 */
function stanford_pingdash_drush_command() {
  $items = array();

  $items['pingdash-update-nodes'] = array(
    'description' => 'Refresh information from Pingdom and update node fields',
    'aliases' => array('pun'),
  );
  return $items;
}

function drush_stanford_pingdash_pingdash_update_nodes() {
  stanford_pingdash_update_nodes();
  drush_log(dt("Updated site information from Pingdom."), "ok");
}