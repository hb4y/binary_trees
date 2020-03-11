#include "binary_trees.h"

/**
 * count - Count the leaves in a tree.
 * @tree: Pointer to the root node of the tree to traverse
 * Return: Number of leaves in a tree.
 */
int count(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	return (count(tree->left) + count(tree->right));
}

/**
 * binary_tree_leaves - Count the leaves in a tree.
 * @tree: Pointer to the root node of the tree to traverse
 * Return: Number of leaves in a tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (count(tree));
}
