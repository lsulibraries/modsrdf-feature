<?php
/**
 * @file
 * modsrdf.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function modsrdf_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_citeas'.
  $field_bases['field_citeas'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_citeas',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'xpath_field',
    'settings' => array(),
    'storage' => array(
      'active' => 1,
      'module' => 'xpath_field',
      'settings' => array(),
      'type' => 'xpath_field_storage',
    ),
    'translatable' => 0,
    'type' => 'xpath_field_xpath',
  );

  // Exported field_base: 'field_identifier_mods'.
  $field_bases['field_identifier_mods'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_identifier_mods',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'xpath_field',
    'settings' => array(),
    'storage' => array(
      'active' => 1,
      'module' => 'xpath_field',
      'settings' => array(),
      'type' => 'xpath_field_storage',
    ),
    'translatable' => 0,
    'type' => 'xpath_field_xpath',
  );

  // Exported field_base: 'field_mods'.
  $field_bases['field_mods'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_mods',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'xml_field',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'xml_field_xml',
  );

  // Exported field_base: 'field_mods_audio'.
  $field_bases['field_mods_audio'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_mods_audio',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'xml_field',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'xml_field_xml',
  );

  // Exported field_base: 'field_mods_mock_title'.
  $field_bases['field_mods_mock_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_mods_mock_title',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'xpath_field',
    'settings' => array(),
    'storage' => array(
      'active' => 1,
      'module' => 'xpath_field',
      'settings' => array(),
      'type' => 'xpath_field_storage',
    ),
    'translatable' => 0,
    'type' => 'xpath_field_xpath',
  );

  // Exported field_base: 'field_mods_test_mockup'.
  $field_bases['field_mods_test_mockup'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_mods_test_mockup',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'xml_field',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'xml_field_xml',
  );

  // Exported field_base: 'field_origin_info_frommods'.
  $field_bases['field_origin_info_frommods'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_origin_info_frommods',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'xpath_field',
    'settings' => array(),
    'storage' => array(
      'active' => 1,
      'module' => 'xpath_field',
      'settings' => array(),
      'type' => 'xpath_field_storage',
    ),
    'translatable' => 0,
    'type' => 'xpath_field_xpath',
  );

  // Exported field_base: 'field_subject_topic_mods'.
  $field_bases['field_subject_topic_mods'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_subject_topic_mods',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'xpath_field',
    'settings' => array(),
    'storage' => array(
      'active' => 1,
      'module' => 'xpath_field',
      'settings' => array(),
      'type' => 'xpath_field_storage',
    ),
    'translatable' => 0,
    'type' => 'xpath_field_xpath',
  );

  // Exported field_base: 'field_typeofresource_mods'.
  $field_bases['field_typeofresource_mods'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_typeofresource_mods',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'xpath_field',
    'settings' => array(),
    'storage' => array(
      'active' => 1,
      'module' => 'xpath_field',
      'settings' => array(),
      'type' => 'xpath_field_storage',
    ),
    'translatable' => 0,
    'type' => 'xpath_field_xpath',
  );

  return $field_bases;
}
