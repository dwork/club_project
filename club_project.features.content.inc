<?php
/**
 * @file
 * club_project.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function club_project_content_defaults() {
  $content = array();

  $content['doc_projects'] = (object) array(
    'exported_path' => 'help/documents/projects',
    'title' => 'Projects',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'documentation',
    'language' => 'und',
    'created' => '1339826582',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'doc_projects',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Projects are ...</p>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Projects are ...</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
