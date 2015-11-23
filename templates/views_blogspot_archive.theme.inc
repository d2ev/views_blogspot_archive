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
  $variables['views_blogspot_archive'] = 'some data here.';
}
