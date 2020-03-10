#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a binary tree node is a leaf.
 * @node: Node to check
 * Return: 1 if @node is leaf, 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left || node->right)
		return (0);
	return (1);
}
