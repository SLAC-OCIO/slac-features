<?php
/**
 * @file
 * landing_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function landing_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_landing_page';
  $strongarm->value = 0;
  $export['comment_anonymous_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_landing_page';
  $strongarm->value = 1;
  $export['comment_default_mode_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_landing_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_landing_page';
  $strongarm->value = 1;
  $export['comment_form_location_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_landing_page';
  $strongarm->value = '1';
  $export['comment_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_landing_page';
  $strongarm->value = '1';
  $export['comment_preview_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_landing_page';
  $strongarm->value = 1;
  $export['comment_subject_field_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__landing_page';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_landing_page';
  $strongarm->value = array();
  $export['menu_options_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_landing_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_landing_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_landing_page';
  $strongarm->value = '1';
  $export['node_preview_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_landing_page';
  $strongarm->value = 1;
  $export['node_submitted_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_landing_page';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'substitute' => '',
        'default' => 1,
        'choice' => 1,
      ),
      'default' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'calendar_teaser' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:landing_page:page_manager_selection';
  $strongarm->value = 'node:landing_page:default';
  $export['panelizer_node:landing_page:page_manager_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:landing_page_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:27:"panelizer_node:landing_page";s:23:"allowed_layout_settings";a:21:{s:8:"flexible";b:0;s:17:"threecol_25_50_25";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:14:"twocol_stacked";b:0;s:6:"onecol";b:1;s:13:"twocol_bricks";b:0;s:6:"twocol";b:1;s:17:"threecol_33_34_33";b:0;s:14:"zen_no_wrapper";b:0;s:10:"page_basic";b:0;s:7:"two_col";b:1;s:24:"flexible:service_catalog";b:1;s:15:"two_col_article";b:1;s:14:"two_col_extorg";b:1;s:14:"two_col_events";b:1;s:13:"page_basic_io";b:1;s:13:"page_basic_eo";b:1;s:13:"one_col_basic";b:1;s:10:"newsletter";b:1;s:19:"calendar_two_column";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:landing_page_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:landing_page_allowed_layouts_default';
  $strongarm->value = 0;
  $export['panelizer_node:landing_page_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:landing_page_allowed_types';
  $strongarm->value = array(
    'user_links-user_links' => TRUE,
    'term_name-term_name' => TRUE,
    'page_feed_icons-page_feed_icons' => TRUE,
    'page_logo-page_logo' => TRUE,
    'page_site_name-page_site_name' => TRUE,
    'page_slogan-page_slogan' => TRUE,
    'page_title-page_title' => TRUE,
    'node_author-node_author' => TRUE,
    'node_body-node_body' => TRUE,
    'node_comment_wrapper-node_comment_wrapper' => TRUE,
    'node_content-node_content' => TRUE,
    'node_links-node_links' => TRUE,
    'node_title-node_title' => TRUE,
    'comment_created-comment_created' => TRUE,
    'comment_links-comment_links' => TRUE,
    'current_date-current_date' => TRUE,
    'node_author_sp-node_author_sp' => TRUE,
    'node_form_metatags-node_form_metatags' => TRUE,
    'blog_archive_menu-blog_archive_menu' => TRUE,
    'site_logo-site_logo' => TRUE,
    'event_series-event_series' => TRUE,
    'event_view_toggle-event_view_toggle' => TRUE,
    'taxonomy_terms-taxonomy_terms' => TRUE,
    'news_archive_menu-news_archive_menu' => TRUE,
    'news_type_menu-news_type_menu' => TRUE,
    'slac_profile_complete-slac_profile_complete' => TRUE,
    'rss_block-rss_block' => TRUE,
    'search_block-search_block' => TRUE,
    'search_options-search_options' => TRUE,
    'site_address-site_address' => TRUE,
    'vocabulary_terms-vocabulary_terms' => FALSE,
    'user_picture-user_picture' => FALSE,
    'user_profile-user_profile' => FALSE,
    'user_signature-user_signature' => FALSE,
    'term_description-term_description' => FALSE,
    'term_list-term_list' => FALSE,
    'page_actions-page_actions' => FALSE,
    'page_breadcrumb-page_breadcrumb' => FALSE,
    'page_help-page_help' => FALSE,
    'page_messages-page_messages' => FALSE,
    'page_primary_links-page_primary_links' => FALSE,
    'page_secondary_links-page_secondary_links' => FALSE,
    'page_tabs-page_tabs' => FALSE,
    'node_form_author-node_form_author' => FALSE,
    'node_form_buttons-node_form_buttons' => FALSE,
    'node_form_comment-node_form_comment' => FALSE,
    'node_form_language-node_form_language' => FALSE,
    'node_form_log-node_form_log' => FALSE,
    'node_form_menu-node_form_menu' => FALSE,
    'node_form_path-node_form_path' => FALSE,
    'node_form_publishing-node_form_publishing' => FALSE,
    'node_form_title-node_form_title' => FALSE,
    'node_attachments-node_attachments' => FALSE,
    'node_comments-node_comments' => FALSE,
    'node_comment_form-node_comment_form' => FALSE,
    'node_created-node_created' => FALSE,
    'node_terms-node_terms' => FALSE,
    'node_type_desc-node_type_desc' => FALSE,
    'node_updated-node_updated' => FALSE,
    'node-node' => FALSE,
    'form-form' => FALSE,
    'comment_reply_form-comment_reply_form' => FALSE,
    'file_content-file_content' => FALSE,
    'file_display-file_display' => FALSE,
    'page_content-page_content' => FALSE,
    'pane_header-pane_header' => FALSE,
    'pane_messages-pane_messages' => FALSE,
    'pane_navigation-pane_navigation' => FALSE,
    'views_attachments-views_attachments' => FALSE,
    'views_empty-views_empty' => FALSE,
    'views_exposed-views_exposed' => FALSE,
    'views_feed-views_feed' => FALSE,
    'views_footer-views_footer' => FALSE,
    'views_header-views_header' => FALSE,
    'views_pager-views_pager' => FALSE,
    'views_row-views_row' => FALSE,
    'views_view-views_view' => FALSE,
    'panelizer_form_default-panelizer_form_default' => FALSE,
    'entity_form_field-bean:field_block_bb_content' => TRUE,
    'entity_form_field-bean:field_content_block_background' => TRUE,
    'entity_form_field-bean:field_content_block_body' => TRUE,
    'entity_form_field-bean:field_content_block_image' => TRUE,
    'entity_form_field-bean:field_content_block_link' => TRUE,
    'entity_form_field-bean:field_content_block_subtitle' => TRUE,
    'entity_form_field-bean:field_image_position' => TRUE,
    'entity_form_field-bean:field_list_of_links' => TRUE,
    'entity_form_field-comment:support_ticket_upload' => TRUE,
    'entity_form_field-fieldable_panels_pane:field_mini_slideshow_slide' => TRUE,
    'entity_form_field-fieldable_panels_pane:field_project_info' => TRUE,
    'entity_form_field-fieldable_panels_pane:field_share_options' => TRUE,
    'entity_form_field-fieldable_panels_pane:field_sb_body' => TRUE,
    'entity_form_field-fieldable_panels_pane:field_sb_image' => TRUE,
    'entity_form_field-fieldable_panels_pane:field_subtitle' => TRUE,
    'entity_form_field-field_collection_item:field_brochure_download_link' => TRUE,
    'entity_form_field-field_collection_item:field_brochure_image' => TRUE,
    'entity_form_field-field_collection_item:field_brochure_title' => TRUE,
    'entity_form_field-field_collection_item:field_block_bb_brochures' => TRUE,
    'entity_form_field-field_collection_item:field_block_bb_title' => TRUE,
    'entity_form_field-field_collection_item:field_document_type' => TRUE,
    'entity_form_field-field_collection_item:field_title_and_url' => TRUE,
    'entity_form_field-field_collection_item:field_fcollection_caption' => TRUE,
    'entity_form_field-field_collection_item:field_project_info_description' => TRUE,
    'entity_form_field-field_collection_item:field_project_info_image' => TRUE,
    'entity_form_field-field_collection_item:field_project_info_link' => TRUE,
    'entity_form_field-field_collection_item:field_project_info_name' => TRUE,
    'entity_form_field-node:field_bp_image' => TRUE,
    'entity_form_field-node:field_slac_sc_category' => TRUE,
    'entity_form_field-node:field_slac_sc_eligibility' => TRUE,
    'entity_form_field-node:field_slac_sc_rate' => TRUE,
    'entity_form_field-node:field_slac_sc_request_link' => TRUE,
    'entity_form_field-node:field_slac_sc_requirements' => TRUE,
    'entity_form_field-node:field_slac_sc_service_overview' => TRUE,
    'entity_form_field-node:field_slac_sc_support' => TRUE,
    'entity_form_field-node:date_repeat_entity_clone_state' => TRUE,
    'entity_form_field-node:date_repeat_entity_master_uuid' => TRUE,
    'entity_form_field-node:field_attachment' => TRUE,
    'entity_form_field-node:field_event_image' => TRUE,
    'entity_form_field-node:field_event_tags' => TRUE,
    'entity_form_field-node:field_location' => TRUE,
    'entity_form_field-node:field_slac_event_audience' => TRUE,
    'entity_form_field-node:field_slac_event_category' => TRUE,
    'entity_form_field-node:field_slac_event_contact' => TRUE,
    'entity_form_field-node:field_slac_event_date' => TRUE,
    'entity_form_field-node:field_slac_event_link' => TRUE,
    'entity_form_field-node:field_slac_event_organization' => TRUE,
    'entity_form_field-node:field_slac_event_related_links' => TRUE,
    'entity_form_field-node:field_slac_event_scientific_area' => TRUE,
    'entity_form_field-node:field_detailed_question' => TRUE,
    'entity_form_field-node:field_faq_category' => TRUE,
    'entity_form_field-node:field_question_details' => TRUE,
    'entity_form_field-node:field_status' => TRUE,
    'entity_form_field-node:field_kb_article_media' => TRUE,
    'entity_form_field-node:field_kb_categories' => TRUE,
    'entity_form_field-node:field_slac_news_citation' => TRUE,
    'entity_form_field-node:field_slac_news_contact' => TRUE,
    'entity_form_field-node:field_slac_news_date' => TRUE,
    'entity_form_field-node:field_slac_news_media' => TRUE,
    'entity_form_field-node:field_slac_news_source' => TRUE,
    'entity_form_field-node:field_slac_news_tags' => TRUE,
    'entity_form_field-node:field_slac_news_type' => TRUE,
    'entity_form_field-node:field_newsletter_date' => TRUE,
    'entity_form_field-node:field_simplenews_term' => TRUE,
    'entity_form_field-node:support_ticket_upload' => TRUE,
    'entity_form_field-node:field_support_category' => TRUE,
    'entity_form_field-profile2:field_prf_contact_fname' => TRUE,
    'entity_form_field-profile2:field_prf_contact_lname' => TRUE,
    'entity_form_field-profile2:field_published' => TRUE,
    'entity_form_field-taxonomy_term:field_slac_sc_category_logo' => TRUE,
    'entity_form_field-taxonomy_term:field_sc_catalog_item_extlink' => TRUE,
    'entity_form_field-taxonomy_term:field_field_slac_event_color' => TRUE,
    'entity_form_field-comment:comment_body' => FALSE,
    'entity_form_field-fieldable_panels_pane:field_slideshow_btmdesc_slide' => FALSE,
    'entity_form_field-fieldable_panels_pane:field_slac_sm_facebook_page' => FALSE,
    'entity_form_field-fieldable_panels_pane:field_slac_sm_flickr_page' => FALSE,
    'entity_form_field-fieldable_panels_pane:field_slac_sm_google_page' => FALSE,
    'entity_form_field-fieldable_panels_pane:field_slac_sm_twitter_page' => FALSE,
    'entity_form_field-fieldable_panels_pane:field_slac_sm_youtube_page' => FALSE,
    'entity_form_field-field_collection_item:field_fcollection_description' => FALSE,
    'entity_form_field-field_collection_item:field_fcollection_image' => FALSE,
    'entity_form_field-field_collection_item:field_fcollection_link' => FALSE,
    'entity_form_field-node:body' => FALSE,
    'entity_form_field-node:field_slac_blog_image' => FALSE,
    'entity_form_field-node:field_slac_blog_tags' => FALSE,
    'entity_form_field-profile2:field_prf_bio_ar' => FALSE,
    'entity_form_field-profile2:field_prf_bio_bio' => FALSE,
    'entity_form_field-profile2:field_prf_bio_education' => FALSE,
    'entity_form_field-profile2:field_prf_bio_ha' => FALSE,
    'entity_form_field-profile2:field_prf_bio_pa' => FALSE,
    'entity_form_field-profile2:field_prf_bio_pexp' => FALSE,
    'entity_form_field-profile2:field_prf_bio_pub' => FALSE,
    'entity_form_field-profile2:field_prf_bio_tp' => FALSE,
    'entity_form_field-profile2:field_prf_contact_affiliation' => FALSE,
    'entity_form_field-profile2:field_prf_contact_email' => FALSE,
    'entity_form_field-profile2:field_prf_contact_fax' => FALSE,
    'entity_form_field-profile2:field_prf_contact_location' => FALSE,
    'entity_form_field-profile2:field_prf_contact_phone' => FALSE,
    'entity_form_field-profile2:field_prf_contact_photo' => FALSE,
    'entity_form_field-profile2:field_prf_contact_rg' => FALSE,
    'entity_form_field-profile2:field_prf_contact_title' => FALSE,
    'entity_form_field-profile2:field_prf_contact_website' => FALSE,
    'entity_form_field-profile2:field_prf_social_facebook' => FALSE,
    'entity_form_field-profile2:field_prf_social_flickr' => FALSE,
    'entity_form_field-profile2:field_prf_social_googleplus' => FALSE,
    'entity_form_field-profile2:field_prf_social_linkedin' => FALSE,
    'entity_form_field-profile2:field_prf_social_twitter' => FALSE,
    'entity_form_field-file:field_file_image_alt_text' => FALSE,
    'entity_form_field-file:field_file_image_title_text' => FALSE,
    'entity_form_field-file:field_file_image_description' => FALSE,
    'entity_field-bean:field_block_bb_content' => TRUE,
    'entity_field-bean:field_content_block_background' => TRUE,
    'entity_field-bean:field_content_block_body' => TRUE,
    'entity_field-bean:field_content_block_image' => TRUE,
    'entity_field-bean:field_content_block_link' => TRUE,
    'entity_field-bean:field_content_block_subtitle' => TRUE,
    'entity_field-bean:field_image_position' => TRUE,
    'entity_field-bean:field_list_of_links' => TRUE,
    'entity_field-comment:support_ticket_upload' => TRUE,
    'entity_field-fieldable_panels_pane:field_mini_slideshow_slide' => TRUE,
    'entity_field-fieldable_panels_pane:field_project_info' => TRUE,
    'entity_field-fieldable_panels_pane:field_share_options' => TRUE,
    'entity_field-fieldable_panels_pane:field_sb_body' => TRUE,
    'entity_field-fieldable_panels_pane:field_sb_image' => TRUE,
    'entity_field-fieldable_panels_pane:field_subtitle' => TRUE,
    'entity_field-field_collection_item:field_brochure_download_link' => TRUE,
    'entity_field-field_collection_item:field_brochure_image' => TRUE,
    'entity_field-field_collection_item:field_brochure_title' => TRUE,
    'entity_field-field_collection_item:field_block_bb_brochures' => TRUE,
    'entity_field-field_collection_item:field_block_bb_title' => TRUE,
    'entity_field-field_collection_item:field_document_type' => TRUE,
    'entity_field-field_collection_item:field_title_and_url' => TRUE,
    'entity_field-field_collection_item:field_fcollection_caption' => TRUE,
    'entity_field-field_collection_item:field_project_info_description' => TRUE,
    'entity_field-field_collection_item:field_project_info_image' => TRUE,
    'entity_field-field_collection_item:field_project_info_link' => TRUE,
    'entity_field-field_collection_item:field_project_info_name' => TRUE,
    'entity_field-node:field_bp_image' => TRUE,
    'entity_field-node:field_slac_sc_category' => TRUE,
    'entity_field-node:field_slac_sc_eligibility' => TRUE,
    'entity_field-node:field_slac_sc_rate' => TRUE,
    'entity_field-node:field_slac_sc_request_link' => TRUE,
    'entity_field-node:field_slac_sc_requirements' => TRUE,
    'entity_field-node:field_slac_sc_service_overview' => TRUE,
    'entity_field-node:field_slac_sc_support' => TRUE,
    'entity_field-node:date_repeat_entity_clone_state' => TRUE,
    'entity_field-node:date_repeat_entity_master_uuid' => TRUE,
    'entity_field-node:field_attachment' => TRUE,
    'entity_field-node:field_event_image' => TRUE,
    'entity_field-node:field_event_tags' => TRUE,
    'entity_field-node:field_location' => TRUE,
    'entity_field-node:field_slac_event_audience' => TRUE,
    'entity_field-node:field_slac_event_category' => TRUE,
    'entity_field-node:field_slac_event_contact' => TRUE,
    'entity_field-node:field_slac_event_date' => TRUE,
    'entity_field-node:field_slac_event_link' => TRUE,
    'entity_field-node:field_slac_event_organization' => TRUE,
    'entity_field-node:field_slac_event_related_links' => TRUE,
    'entity_field-node:field_slac_event_scientific_area' => TRUE,
    'entity_field-node:field_detailed_question' => TRUE,
    'entity_field-node:field_faq_category' => TRUE,
    'entity_field-node:field_question_details' => TRUE,
    'entity_field-node:field_status' => TRUE,
    'entity_field-node:field_kb_article_media' => TRUE,
    'entity_field-node:field_kb_categories' => TRUE,
    'entity_field-node:field_slac_news_citation' => TRUE,
    'entity_field-node:field_slac_news_contact' => TRUE,
    'entity_field-node:field_slac_news_date' => TRUE,
    'entity_field-node:field_slac_news_media' => TRUE,
    'entity_field-node:field_slac_news_source' => TRUE,
    'entity_field-node:field_slac_news_tags' => TRUE,
    'entity_field-node:field_slac_news_type' => TRUE,
    'entity_field-node:field_newsletter_date' => TRUE,
    'entity_field-node:field_simplenews_term' => TRUE,
    'entity_field-node:support_ticket_upload' => TRUE,
    'entity_field-node:field_support_category' => TRUE,
    'entity_field-profile2:field_prf_contact_fname' => TRUE,
    'entity_field-profile2:field_prf_contact_lname' => TRUE,
    'entity_field-profile2:field_published' => TRUE,
    'entity_field-taxonomy_term:field_slac_sc_category_logo' => TRUE,
    'entity_field-taxonomy_term:field_sc_catalog_item_extlink' => TRUE,
    'entity_field-taxonomy_term:field_field_slac_event_color' => TRUE,
    'entity_field-comment:comment_body' => FALSE,
    'entity_field-fieldable_panels_pane:field_slideshow_btmdesc_slide' => FALSE,
    'entity_field-fieldable_panels_pane:field_slac_sm_facebook_page' => FALSE,
    'entity_field-fieldable_panels_pane:field_slac_sm_flickr_page' => FALSE,
    'entity_field-fieldable_panels_pane:field_slac_sm_google_page' => FALSE,
    'entity_field-fieldable_panels_pane:field_slac_sm_twitter_page' => FALSE,
    'entity_field-fieldable_panels_pane:field_slac_sm_youtube_page' => FALSE,
    'entity_field-field_collection_item:field_fcollection_description' => FALSE,
    'entity_field-field_collection_item:field_fcollection_image' => FALSE,
    'entity_field-field_collection_item:field_fcollection_link' => FALSE,
    'entity_field-node:body' => FALSE,
    'entity_field-node:field_slac_blog_image' => FALSE,
    'entity_field-node:field_slac_blog_tags' => FALSE,
    'entity_field-profile2:field_prf_bio_ar' => FALSE,
    'entity_field-profile2:field_prf_bio_bio' => FALSE,
    'entity_field-profile2:field_prf_bio_education' => FALSE,
    'entity_field-profile2:field_prf_bio_ha' => FALSE,
    'entity_field-profile2:field_prf_bio_pa' => FALSE,
    'entity_field-profile2:field_prf_bio_pexp' => FALSE,
    'entity_field-profile2:field_prf_bio_pub' => FALSE,
    'entity_field-profile2:field_prf_bio_tp' => FALSE,
    'entity_field-profile2:field_prf_contact_affiliation' => FALSE,
    'entity_field-profile2:field_prf_contact_email' => FALSE,
    'entity_field-profile2:field_prf_contact_fax' => FALSE,
    'entity_field-profile2:field_prf_contact_location' => FALSE,
    'entity_field-profile2:field_prf_contact_phone' => FALSE,
    'entity_field-profile2:field_prf_contact_photo' => FALSE,
    'entity_field-profile2:field_prf_contact_rg' => FALSE,
    'entity_field-profile2:field_prf_contact_title' => FALSE,
    'entity_field-profile2:field_prf_contact_website' => FALSE,
    'entity_field-profile2:field_prf_social_facebook' => FALSE,
    'entity_field-profile2:field_prf_social_flickr' => FALSE,
    'entity_field-profile2:field_prf_social_googleplus' => FALSE,
    'entity_field-profile2:field_prf_social_linkedin' => FALSE,
    'entity_field-profile2:field_prf_social_twitter' => FALSE,
    'entity_field-file:field_file_image_alt_text' => FALSE,
    'entity_field-file:field_file_image_title_text' => FALSE,
    'entity_field-file:field_file_image_description' => FALSE,
    'entity_field_extra-bean:title' => TRUE,
    'entity_field_extra-user:simplenews' => TRUE,
    'entity_field_extra-fieldable_panels_pane:title' => FALSE,
    'entity_field_extra-node:webform' => FALSE,
    'entity_field_extra-file:file' => FALSE,
    'entity_field_extra-taxonomy_term:description' => FALSE,
    'entity_field_extra-user:summary' => FALSE,
    'custom-custom' => FALSE,
    'block-bean-bean-our-vision' => TRUE,
    'block-bean-our-mission-1' => TRUE,
    'block-bean-our-mission-2' => TRUE,
    'block-bean-efficient-design' => TRUE,
    'block-calendar-calendar_legend' => TRUE,
    'block-faq-faq_categories' => TRUE,
    'block-faq_ask-unanswered' => TRUE,
    'block-faq_ask-ask_a_question' => TRUE,
    'block-simplenews-0' => TRUE,
    'block-simplenews-1' => TRUE,
    'block-simplenews-2' => TRUE,
    'block-superfish-1' => TRUE,
    'block-superfish-2' => TRUE,
    'block-superfish-3' => TRUE,
    'block-superfish-4' => TRUE,
    'block-workbench-block' => TRUE,
    'block-views--exp-events-month' => TRUE,
    'block-views--exp-events-week' => TRUE,
    'block-views--exp-events-day' => TRUE,
    'block-views--exp-events-month_list' => TRUE,
    'block-views--exp-events-week_list' => TRUE,
    'block-views--exp-events-day_list' => TRUE,
    'block-views--exp-events-minicalendar' => TRUE,
    'block-views--exp-events-taxonomy_term_list' => TRUE,
    'block-blog-recent' => FALSE,
    'block-comment-recent' => FALSE,
    'block-diff-inline' => FALSE,
    'block-menu-devel' => FALSE,
    'block-menu-menu-footer-menu-1' => FALSE,
    'block-menu-menu-footer-menu' => FALSE,
    'block-menu-menu-header-menu' => FALSE,
    'block-node-syndicate' => FALSE,
    'block-node-recent' => FALSE,
    'block-system-powered-by' => FALSE,
    'block-system-help' => FALSE,
    'block-system-navigation' => FALSE,
    'block-system-management' => FALSE,
    'block-system-user-menu' => FALSE,
    'block-system-main-menu' => FALSE,
    'block-user-login' => FALSE,
    'block-user-new' => FALSE,
    'block-user-online' => FALSE,
    'block-devel-execute_php' => FALSE,
    'block-devel-switch_user' => FALSE,
    'entity_view-bean' => TRUE,
    'entity_view-workbench_moderation_transition' => TRUE,
    'entity_view-support_client' => TRUE,
    'entity_view-comment' => FALSE,
    'entity_view-fieldable_panels_pane' => FALSE,
    'entity_view-field_collection_item' => FALSE,
    'entity_view-node' => FALSE,
    'entity_view-profile2' => FALSE,
    'entity_view-profile2_type' => FALSE,
    'entity_view-file' => FALSE,
    'entity_view-taxonomy_term' => FALSE,
    'entity_view-user' => FALSE,
    'entity_view-rules_config' => FALSE,
    'fieldable_panels_pane-slac_mini_slideshow' => TRUE,
    'fieldable_panels_pane-slideshow_description_bottom' => TRUE,
    'fieldable_panels_pane-slac_projects' => TRUE,
    'fieldable_panels_pane-share_block' => TRUE,
    'fieldable_panels_pane-slac_sidebar_block' => TRUE,
    'fieldable_panels_pane-social_media' => TRUE,
    'fieldable_panels_pane-fieldable_panels_pane' => FALSE,
    'menu_tree-_active' => TRUE,
    'menu_tree-devel' => TRUE,
    'menu_tree-menu-footer-menu-1' => TRUE,
    'menu_tree-menu-footer-menu' => TRUE,
    'menu_tree-menu-header-menu' => TRUE,
    'menu_tree-main-menu' => TRUE,
    'menu_tree-management' => TRUE,
    'menu_tree-navigation' => TRUE,
    'menu_tree-user-menu' => TRUE,
    'panels_mini-footer' => FALSE,
    'panels_mini-second_footer' => FALSE,
    'views-admin_views_comment' => TRUE,
    'views-admin_views_file' => TRUE,
    'views-admin_views_node' => TRUE,
    'views-admin_views_user' => TRUE,
    'views-calendar' => TRUE,
    'views-events' => TRUE,
    'views-event_calendar_legend' => TRUE,
    'views-faq_category' => TRUE,
    'views-feeds_log' => TRUE,
    'views-ical_event' => TRUE,
    'views-kb_articles' => TRUE,
    'views-news' => TRUE,
    'views-newsletter' => TRUE,
    'views-news_tags' => TRUE,
    'views-people_listing' => TRUE,
    'views-profile_user_elements_extorg' => TRUE,
    'views-service_catalog_category' => TRUE,
    'views-service_catalog_item' => TRUE,
    'views-slac_faq' => TRUE,
    'views-webform_analysis' => TRUE,
    'views-webform_results' => TRUE,
    'views-webform_submissions' => TRUE,
    'views-webform_webforms' => TRUE,
    'views-workbench_current_user' => TRUE,
    'views-workbench_edited' => TRUE,
    'views-workbench_moderation' => TRUE,
    'views-workbench_recent_content' => TRUE,
    'views-faq' => FALSE,
    'views-fieldable_pane_entities' => FALSE,
    'views-fieldable_pane_entity_revisions' => FALSE,
    'views-media_default' => FALSE,
    'views-blog_page' => FALSE,
    'views-blog_tags' => FALSE,
    'views-slac_rss_block' => FALSE,
    'views_panes-blog_tags-panel_pane_1' => TRUE,
    'views_panes-calendar-panel_pane_2' => TRUE,
    'views_panes-events-panel_pane_1' => TRUE,
    'views_panes-events-month' => TRUE,
    'views_panes-events-week' => TRUE,
    'views_panes-events-day' => TRUE,
    'views_panes-events-month_list' => TRUE,
    'views_panes-events-week_list' => TRUE,
    'views_panes-events-day_list' => TRUE,
    'views_panes-events-minicalendar' => TRUE,
    'views_panes-events-taxonomy_term_list' => TRUE,
    'views_panes-faq_category-panel_pane_1' => TRUE,
    'views_panes-slac_faq-panel_pane_1' => TRUE,
    'views_panes-slac_faq-panel_pane_2' => TRUE,
    'views_panes-slac_faq-panel_pane_3' => TRUE,
    'views_panes-kb_articles-panel_pane_1' => TRUE,
    'views_panes-kb_articles-panel_pane_2' => TRUE,
    'views_panes-kb_articles-panel_pane_3' => TRUE,
    'views_panes-news-panel_pane_1' => TRUE,
    'views_panes-news-panel_pane_2' => TRUE,
    'views_panes-news-panel_pane_3' => TRUE,
    'views_panes-news-panel_pane_4' => TRUE,
    'views_panes-news-panel_pane_5' => TRUE,
    'views_panes-news-panel_pane_6' => TRUE,
    'views_panes-news_tags-panel_pane_1' => TRUE,
    'views_panes-newsletter-panel_pane_1' => TRUE,
    'views_panes-newsletter-panel_pane_2' => TRUE,
    'views_panes-people_listing-panel_pane_1' => TRUE,
    'views_panes-profile_user_elements_extorg-panel_pane_1' => TRUE,
    'views_panes-profile_user_elements_extorg-panel_pane_2' => TRUE,
    'views_panes-profile_user_elements_extorg-panel_pane_4' => TRUE,
    'views_panes-service_catalog_category-panel_pane_1' => TRUE,
    'views_panes-service_catalog_category-panel_pane_2' => TRUE,
    'views_panes-service_catalog_category-panel_pane_3' => TRUE,
    'views_panes-service_catalog_category-panel_pane_4' => TRUE,
    'views_panes-service_catalog_item-panel_pane_1' => TRUE,
    'views_panes-service_catalog_item-panel_pane_2' => TRUE,
    'views_panes-service_catalog_item-panel_pane_3' => TRUE,
    'views_panes-slac_rss_block-rss_block' => FALSE,
    'views_feed_pane-blog_page:feed_1' => TRUE,
    'views_feed_pane-events:feed_1' => TRUE,
    'views_feed_pane-news:feed_1' => TRUE,
  );
  $export['panelizer_node:landing_page_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:landing_page_allowed_types_default';
  $strongarm->value = 0;
  $export['panelizer_node:landing_page_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:landing_page_default';
  $strongarm->value = array(
    'entity_form_field' => 'entity_form_field',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'custom' => 'custom',
    'block' => 'block',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'panels_mini' => 'panels_mini',
    'views' => 'views',
    'views_panes' => 'views_panes',
    'other' => 'other',
    'token' => 0,
    'menu_tree' => 0,
    'views_feed_pane' => 0,
  );
  $export['panelizer_node:landing_page_default'] = $strongarm;

  return $export;
}
