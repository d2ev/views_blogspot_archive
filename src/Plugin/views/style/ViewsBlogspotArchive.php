<?php
/**
 * @file
 * Definition of Drupal\sna_blocks\Plugin\views\style\SimpleNodeArchive.
 */

namespace Drupal\views_blogspot_archive\Plugin\views\style;

use Drupal\views\Plugin\views\style\StylePluginBase;
use Drupal\Core\Form\FormStateInterface;

/**
 * The style plugin for views_blogspot_archive.
 *
 * @ingroup views_style_plugins
 *
 * @ViewsStyle(
 *   id = "views_blogspot_archive",
 *   title = @Translation("Views Blogspot Archive"),
 *   help = @Translation("Displays result in archive formatted, with month and year that link to archive page."),
 *   theme = "views_blogspot_archive_view_archive",
 *   theme_file = "views_blogspot_archive.theme.inc",
 *   display_types = {"normal"}
 * )
 */
class ViewsBlogspotArchive extends StylePluginBase {
  /**
   * Overrides Drupal\views\Plugin\Plugin::$usesOptions.
   */
  protected $usesOptions = TRUE;

  /**
   * Does the style plugin allows to use style plugins.
   *
   * @var bool
   */
  protected $usesRowPlugin = FALSE;

  /**
   * Does the style plugin support custom css class for the rows.
   *
   * @var bool
   */
  protected $usesRowClass = FALSE;

  /**
   * Does the style plugin support grouping of rows.
   *
   * @var bool
   */
  protected $usesGrouping = FALSE;

  protected function defineOptions() {
    $options = parent::defineOptions();
    // Define options.
    return $options;
  }

  public function buildOptionsForm(&$form, FormStateInterface $form_state) {
    // Options form here.
    parent::buildOptionsForm($form, $form_state);
  }
}
