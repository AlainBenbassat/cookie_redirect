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
  $form['cookieredirect']['civicrmgrouptocheck'] = array(
    '#type'          => 'textfield',
    '#title'         => t('CiviCRM group'),
    '#default_value' => variable_get('civicrmgrouptocheck', ''),
    '#description'   => t('In which CiviCRM group must the user be in order to redirect? (blank = no check)'),
  );
  $form['#submit'][] = 'cookie_redirect_admin_form_submit';

  return system_settings_form($form);
}

function cookie_redirect_admin_form_submit($form, &$form_state) {
  variable_set('cookietoset', $form_state['values']['cookietoset']);
  variable_set('civicrmgrouptocheck', $form_state['values']['civicrmgrouptocheck']);
}
