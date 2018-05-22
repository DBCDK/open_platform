TEST SETUP:

Created a directory for each Open Platform method, and put the json responses in files named by response status:

When testing, set openplatform_url to the method & status type you want to test:
F.ex.:
openplatform_recommender_url:
http://localhost/bibdk/mockups/open_platform_mockup/request/recommender/200
http://localhost/bibdk/mockups/open_platform_mockup/request/recommender/401
http://localhost/bibdk/mockups/open_platform_mockup/request/recommender/500


openplatform_token_url:
http://localhost/bibdk/mockups/open_platform_mockup/request/authenticate/200
http://localhost/bibdk/mockups/open_platform_mockup/request/authenticate/400
