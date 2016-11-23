# cookie_redirect
Sets a cookie and redirects (if aksed)

Principle
---------
The other website checks if the cookie exists.
If not, the Drupal site is called with the query string parameter "rd" equals to the current URL.
The Drupal website checks if the user is logged in.
If not, the login form is shown.
If the user is logged in, the cookie is set, and the user is redirected to the requested page.

Remark
------
To make it more secure the Drupal session id ($user->sid or $user->ssid) can be stored in the session variable.
