<?php
/**
 * @file
 */

/**
 * Forms API form for marketo_field configuration UI.
 */
function marketo_field_admin_form($form_state, $form_id) {
  $form['marketo_field_remote_js'] = array(
    '#type' => 'textfield',
    '#title' => t('Marketo forms2.js URL'),
    '#description' => t('The URL to your forms2.js file.<br> (Usually something like <tt>//app-XYZ.marketo.com/js/forms2/js/forms2.js</tt>.)'),
    '#default_value' => variable_get('marketo_field_remote_js'),
  );
  $form['marketo_field_hostname'] = array(
    '#type' => 'textfield',
    '#title' => t('Marketo application hostname'),
    '#description' => t('The hostname for your Marketo forms.<br> (Usually something like <tt>//app-XYZ.marketo.com</tt>.)'),
    '#default_value' => variable_get('marketo_field_hostname'),
  );
  $form['marketo_field_account'] = array(
    '#type' => 'textfield',
    '#title' => t('Marketo account ID'),
    '#description' => t('The account ID used for your Marketo forms.<br> (Usually in the format <tt>123-ABC-456</tt>.)'),
    '#default_value' => variable_get('marketo_field_account'),
  );
  $form['custom_js'] = array(
    '#type' => 'fieldset',
    '#title' => t('Custom JS callback code'),
    '#collapsible' => TRUE,
    '#collapsed' => !variable_get('marketo_field_use_sitewide_js'),
  );
  $form['custom_js']['marketo_field_use_sitewide_js'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable sitewide JS callback'),
    '#description' => t('This can be overridden on an individual field display basis.'),
    '#default_value' => variable_get('marketo_field_use_sitewide_js') ? variable_get('marketo_field_use_sitewide_js') : FALSE,
  );
  $form['custom_js']['marketo_field_sitewide_js'] = array(
    '#type' => 'textarea',
    '#title' => t('Custom JS callback code'),
    '#description' => t('Flerp gibbet kazoo.'),
    '#default_value' => variable_get('marketo_field_sitewide_js'),
  );
  // Use system_settings_form to store items to variables.
  return system_settings_form($form);
}
