<?php

/**
 * @file
 * Open Platform : OpenPlatformRecommenderRequest class
 * @see ting_client.module
 * @see ting_client_admin_webservices_settings
 **/

class OpenPlatformRecommenderRequest extends OpenPlatformRequest {
  // Since the Open Platform Request has it's own url, instead of passing the 
  // recommender method as a parameter, we need to map the RecommenderRequest
  // aht. hook_ting_client_webservice 
  
  /* Implementation of ITingClientRequestCache */

  /** \brief ITingClientRequestCache::checkResponse; 
   * Check if response is empty. If so, tell ting-client not to cache
   * @param $response
   * @return bool
   */
  public function checkResponse($response) {
    $response = json_decode($response);
    // do NOT cache if result is empty
    if (!$response || empty($response->data)) {
      return FALSE;
    }
    foreach ($response->data as $data) {
      if (!empty($data->pid)) {
        return TRUE;
      }
    }
    return FALSE;
  }
}
