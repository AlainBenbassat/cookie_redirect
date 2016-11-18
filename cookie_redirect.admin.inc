<?php

function cookie_redirect_admin_form() {
  $form['cookieredirect'] = array(
    '#type'  => 'fieldset',
    '#title' => t('Redirect options'),
  );
  $form['cookieredirect']['redirect_url'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Redirect URL'),
    '#default_value' => variable_get('cookie_redirect_url', ''),
    '#description'   => t('Where to go if the cookie is set, and the query parameter rd is given.'),
  );

  $form['#submit'][] = 'cookie_redirect_admin_form_submit';

  return system_settings_form($form);
}

function cookie_redirect_admin_form_submit($form, &$form_state) {
  variable_set('cookie_redirect_url', $form_state['values']['redirect_url']);
}
