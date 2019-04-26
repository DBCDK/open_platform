<?php
class OpenPlatformSuggestRequest extends OpenPlatformRequest{
  /*
 * Implements TingClientRequest::processResponse.
 */
  public function processResponse(stdClass $response) {
    $response_string = json_encode($response);
    $response_array = json_decode($response_string, TRUE);
    return $response_array;
  }
}
