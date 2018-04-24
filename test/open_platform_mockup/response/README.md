Create a directory for each Open Platform method, and put the json responses in files named by response status:
F.ex.:
response.200.json
response.401.json
response.500.json

When testing, set openplatform_url to the method & status type you want to test:
F.ex.:
http://localhost/bibdk/mockups/open_platform_mockup/request/recommender/200
http://localhost/bibdk/mockups/open_platform_mockup/request/recommender/401
http://localhost/bibdk/mockups/open_platform_mockup/request/recommender/500

