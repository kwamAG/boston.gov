<?php
/**
 * @file
 * bos_content_type_procurement_advertisement.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bos_content_type_procurement_advertisement_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|procurement_advertisement|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement_advertisement';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Information',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_procurement',
      2 => 'field_ma_general_law',
      3 => 'field_offering',
      4 => 'field_intro_text',
      5 => 'field_contact',
      6 => 'field_multi_year_contract',
      7 => 'field_contract_length',
      8 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_basic|node|procurement_advertisement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|procurement_advertisement|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement_advertisement';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sidebar';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '15',
    'children' => array(
      0 => 'field_address',
      1 => 'field_phone_number',
      2 => 'field_email',
      3 => 'field_department',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_contact|node|procurement_advertisement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related|node|procurement_advertisement|form';
  $field_group->group_name = 'group_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement_advertisement';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Items',
    'weight' => '4',
    'children' => array(
      0 => 'field_related_departments',
      1 => 'field_multiple_neighborhoods',
      2 => 'field_related_events_notices',
      3 => 'field_related_guides',
      4 => 'field_people',
      5 => 'field_place',
      6 => 'field_related_posts',
      7 => 'field_program_initiative',
      8 => 'field_related_content',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_related|node|procurement_advertisement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar|node|procurement_advertisement|form';
  $field_group->group_name = 'group_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement_advertisement';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '2',
    'children' => array(
      0 => 'field_bid_type',
      1 => 'field_awarding_authority',
      2 => 'field_event_project_number',
      3 => 'field_unspsc',
      4 => 'field_details_link',
      5 => 'field_date_range',
      6 => 'field_url',
      7 => 'field_delivery_address',
      8 => 'field_document',
      9 => 'group_contact',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sidebar field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_sidebar|node|procurement_advertisement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_submissions|node|procurement_advertisement|form';
  $field_group->group_name = 'group_submissions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'procurement_advertisement';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Submissions',
    'weight' => '3',
    'children' => array(
      0 => 'field_bid',
      1 => 'field_award_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-submissions field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_submissions|node|procurement_advertisement|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Basic Information');
  t('Contact');
  t('Related Items');
  t('Sidebar');
  t('Submissions');

  return $field_groups;
}
