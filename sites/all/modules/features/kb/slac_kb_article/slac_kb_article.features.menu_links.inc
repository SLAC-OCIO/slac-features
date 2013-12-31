<?php
/**
 * @file
 * slac_kb_article.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function slac_kb_article_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:kb/all
  $menu_links['main-menu:kb/all'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'kb/all',
    'router_path' => 'kb/%',
    'link_title' => 'Knowledge Base',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 12,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Knowledge Base');


  return $menu_links;
}