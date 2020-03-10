#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a node is a root.
 * @node: Node to check.
 * Return: 1 if node is root, otherwise return 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	else
		return (0);
}
