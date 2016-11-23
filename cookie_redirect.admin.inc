<?php

function cookie_redirect_admin_form() {
  $form['cookieredirect'] = array(
    '#type'  => 'fieldset',
    '#title' => t('Redirect options'),
  );
  $form['cookieredirect']['cookietoset'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Cookie'),
    '#default_value' => variable_get('cookietoset', ''),
    '#description'   => t('Which cookie should be set after logging in?'),
  );

  $form['#submit'][] = 'cookie_redirect_admin_form_submit';

  return system_settings_form($form);
}

function cookie_redirect_admin_form_submit($form, &$form_state) {
  variable_set('cookietoset', $form_state['values']['cookietoset']);
}
