#include "binary_trees.h"

size_t binary_tree_s(const binary_tree_t *tree);

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Tree to measure
 * Return: The size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = binary_tree_s(tree);

	return (size);
}

/**
 * binary_tree_s - Measures the size of a binary tree node
 * @tree: Tree node to measure
 * Return: The size of the binary tree node
 */
size_t binary_tree_s(const binary_tree_t *tree)
{

	size_t left_s, right_s;

	if (!tree)
		return (0);

	left_s = binary_tree_s(tree->left);
	right_s = binary_tree_s(tree->right);

	return (left_s + right_s + 1);
}
