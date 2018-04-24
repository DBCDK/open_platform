<?php

/**
 * Implements hook_cron
 *
 * Get/update access token for library login
 */
function open_platform_cron() {
  open_platform_cron_get_access_token();
}

function open_platform_cron_get_access_token() {
  /*
  $curl = new bibdkHeimdalCurl();
  $token = $curl->getAccessToken();

  if ($token !== FALSE) {
    variable_set('heimdal_access_token', $token);
  }
  else {
    watchdog('HEIMDAL', 'Cron failed to get new access token', array(), WATCHDOG_ERROR);
  }
  */
}
