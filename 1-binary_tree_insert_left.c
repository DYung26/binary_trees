#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node
 * as the left child of a parent node
 * @parent: Pointer to the parent node
 * @value: Value to be stored in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL || parent == NULL)
		return (NULL);
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	newNode->parent = parent;
	parent->left = newNode;
	return (newNode);
}
