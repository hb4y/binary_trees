#include "binary_trees.h"

size_t binary_tree_d(const binary_tree_t *tree);

/**
 * binary_tree_depth - Measures the depth of a node in abinary tree
 * @tree: Tree to measure
 * Return: The depth of the binary tree node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	depth = binary_tree_d(tree);

	return (depth - 1);
}

/**
 * binary_tree_d - Measures the depth of a node in abinary tree
 * @tree: Tree to measure
 * Return: The depth of the binary tree node
 */
size_t binary_tree_d(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	depth = binary_tree_d(tree->parent);

	return (depth + 1);
}
