#include "binary_trees.h"

size_t binary_tree_h(const binary_tree_t *tree);

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Tree to measure
 * Return: The height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	depth = binary_tree_h(tree);

	return (depth - 1);
}

/**
 * binary_tree_h - Measures the height of a binary tree node
 * @tree: Tree node to measure
 * Return: The height of the binary tree node
 */
size_t binary_tree_h(const binary_tree_t *tree)
{

	size_t left_h, right_h;

	if (!tree)
		return (0);

	left_h = binary_tree_h(tree->left);
	right_h = binary_tree_h(tree->right);

	if (left_h > right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}
