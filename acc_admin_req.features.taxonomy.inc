<?php
/**
 * @file
 * acc_admin_req.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function acc_admin_req_taxonomy_default_vocabularies() {
  return array(
    'purpose_of_administrative_request' => array(
      'name' => 'Purpose of Administrative Request',
      'machine_name' => 'purpose_of_administrative_request',
      'description' => '',
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
