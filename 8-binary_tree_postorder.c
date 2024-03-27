#include "binary_trees.h"

/**
 * binary_tree_postorder - Performs a post-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node. The function should
 *        take an integer value as its only parameter.
 *
 * This function performs a post-order traversal on the binary tree rooted
 * at the given node @tree. For each node visited during the traversal, the
 * function @func is called with the value of the node as its parameter.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
