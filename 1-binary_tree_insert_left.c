#include "binary_trees.h"

/**
 * binary_tree_insert - creates a new node for a binary tree
 * @parent: pointer to the parent node of the new node
 * @value: value to be stored in the new node
 *
 * Return: pointer to the newly created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL || parent == NULL)
		return (NULL);
	newNode->n = value;
	newNode->right = NULL;
	
	if (parent->left)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
		newNode->parent = parent;
		parent->left = newNode;
		return (newNode);
	}
	newNode->parent = parent;
	parent->left = newNode;
	newNode->left = NULL;
	return (newNode);
}
