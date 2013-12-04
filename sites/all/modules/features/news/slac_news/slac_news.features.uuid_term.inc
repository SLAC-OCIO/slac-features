<?php
/**
 * @file
 * slac_news.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function slac_news_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'news-article',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '05339b25-6cf8-4e75-b4ea-f91d490f5b04',
    'vocabulary_machine_name' => 'news_types',
  );
  $terms[] = array(
    'name' => 'press-release',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '47c46adc-4bf5-41cc-91a2-96c057b16297',
    'vocabulary_machine_name' => 'news_types',
  );
  return $terms;
}