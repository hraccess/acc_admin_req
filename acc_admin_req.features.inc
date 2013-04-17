<?php
/**
 * @file
 * acc_admin_req.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function acc_admin_req_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
