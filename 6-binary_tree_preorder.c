#include "binary_trees.h"

/**
 * binary_tree_preorder - Performs a pre-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node. The function should
 *        take an integer value as its only parameter.
 *
 * This function performs a pre-order traversal on the binary tree rooted
 * at the given node @tree. For each node visited during the traversal, the
 * function @func is called with the value of the node as its parameter.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
