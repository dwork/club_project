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
  $field_group->identifier = 'group_clubinfo|user|user|form';
  $field_group->group_name = 'group_clubinfo';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Club Information',
    'weight' => '6',
    'children' => array(
      0 => 'field_chapter',
      1 => 'field_classification',
      2 => 'field_status',
      3 => 'field_member_id',
      4 => 'field_sponsor',
      5 => 'group_participation',
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
  $export['group_clubinfo|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_participation|user|user|form';
  $field_group->group_name = 'group_participation';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_clubinfo';
  $field_group->data = array(
    'label' => 'Participation',
    'weight' => '5',
    'children' => array(
      0 => 'field_committee_chair',
      1 => 'field_committee_members',
      2 => 'field_project_chair',
      3 => 'field_project_member',
      4 => 'field_officer',
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
  $export['group_participation|user|user|form'] = $field_group;

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

  return $export;
}
