<?php
/**
 * @file
 * Preprocessors and helper functions to make theming easier.
 */



/**
 * Prepares variables for view templates.
 *
 * Default template: views_blogspot_archive-view-archive.html.twig.
 *
 * @param array $variables
 *   An associative array containing:
 *   - view: A ViewExecutable object.
 *   - rows: The raw row data.
 *   - options: An array of options. Each option contains:
 *     - separator: A string to be placed between inline fields to keep them
 *       visually distinct.
 */
function template_preprocess_views_blogspot_archive_view_archive(&$variables) {
  //dsm($variables);
  $items = array();
  $items[] = 'data here';
  $items[] = array(
    '#markup' => 'Parent item',
    'children' => array(
      'Simple string child',
      array(
        '#markup' => 'Second child item with custom attributes',
        '#wrapper_attributes' => array(
          'class' => array('custom-child-item-class'),
        ),
      ),
    ),
  );

  $variables['views_blogspot_archive'] = [
    '#theme' => 'item_list',
    '#items' => $items,
    '#list_type' => 'ul',
    '#context' => 'list_style',
    '#title' => 'main-title',
  ];
}
