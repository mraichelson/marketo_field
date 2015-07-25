<?php
/**
 * @file
 */

/**
 * Forms API form for marketo_field configuration UI.
 */
function marketo_field_admin_form($form_state, $form_id) {
  $form['intro'] = array(
    '#type' => 'markup',
    '#markup' => '<p>foo bar baz bat.</p>',
  );
  // forms2.js url (//app-foo.marketo.com/js/forms2/js/forms2.js)
  // hostname (//app-foo.marketo.com)
  // account id (123-ABC-456)
  return system_settings_form($form);
}
