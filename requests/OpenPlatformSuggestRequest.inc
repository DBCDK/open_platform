<?php

class OpenPlatformSuggestRequest extends OpenPlatformRequest {
  private $query;

  // getter
  public function setQuery($query) {
    $this->query = $query;
  }

  // setter
  public function getQuery() {
    return $this->query;
  }

  /**
   * Set default outputType or NOT (@see TingClientRequestAdapter.php for usage)
   * if set to FALSE extending class SHOULD implement (override) parseResponse method
   * and handle parsing of response on its own - defaults to TRUE
   * @return bool
   */
  public function defaultOutputType() {
    return FALSE;
  }

   /** overwrite TingClientRequest::checkResponse;
   * Check if response is empty. If so, tell ting-client not to cache
   * @param array $response
   * @return bool
   */
  public function checkResponse($response) {
    // do NOT cache if result is empty
    if (!$response || empty($response['data'])) {
      return FALSE;
    }
    return TRUE;
  }

  /*
 * Implements TingClientRequest::processResponse.
 */
  public function processResponse(stdClass $response) {
    $response_string = json_encode($response);
    $response_array = json_decode($response_string, TRUE);
    return $response_array;
  }
}
