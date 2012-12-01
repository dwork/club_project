<?php
/**
 * @file
 * club_project.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function club_project_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_phonenumbers|node|project|form';
  $field_group->group_name = 'group_phonenumbers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Phone Numbers',
    'weight' => '4',
    'children' => array(
      0 => 'field_phone',
      1 => 'field_phone_number_purpose',
      2 => 'field_private',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_phonenumbers|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project|user|user|form';
  $field_group->group_name = 'group_project';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Participation',
    'weight' => '9',
    'children' => array(
      0 => 'field_project_chair',
      1 => 'field_project_member',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project|user|user|form'] = $field_group;

  return $export;
}
