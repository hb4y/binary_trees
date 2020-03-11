#include "binary_trees.h"

int binary_tree_is_p(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Tree to measure
 * Return: 1 if the binary tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect;

	if (!tree)
		return (0);

	perfect = binary_tree_is_p(tree);

	if (perfect != 0)
		return (1);
	return (perfect);
}

/**
 * binary_tree_is_p - Checks if a binary tree node is perfect
 * @tree: Tree to measure
 * Return: 1 if the binary tree node is perfect, 0 otherwise
 */
int binary_tree_is_p(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	l = binary_tree_is_p(tree->left);
	r = binary_tree_is_p(tree->right);

	if (l != r)
		return (0);

	return (l + r + 1);
}
