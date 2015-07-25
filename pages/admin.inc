<?php
/**
 * @file
 */

/**
 * Page callback function for the admin UI screen.
 */
function _page_marketo_field_admin() {
  module_load_include('inc', 'marketo_field', 'forms/admin');
  return drupal_get_form('marketo_field_admin_form');
}