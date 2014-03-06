<?php
/**
 * @file
 * age_groups.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function age_groups_taxonomy_default_vocabularies() {
  return array(
    'age_groups' => array(
      'name' => 'Age groups',
      'machine_name' => 'age_groups',
      'description' => 'Age groups for registrant prices.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
