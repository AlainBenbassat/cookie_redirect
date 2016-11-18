# cookie_redirect
Sets a cookie and redirects (if aksed)

Principle
---------
The other website checks if the cookie exists.
If not, the Drupal site is called with in the query string the "rd" parameter equals to the current URL.
The Drupal website sets the cookie, and redirects to the requested page.

