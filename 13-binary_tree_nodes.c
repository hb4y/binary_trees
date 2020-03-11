#include "binary_trees.h"

/**
 * count - Count the nodes in a tree.
 * @tree: Pointer to the root node of the tree to traverse
 * Return: Number of nodes in a tree.
 */
int count(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (count(tree->left) + count(tree->right) + 1);
	else
		return (count(tree->left) + count(tree->right));
}

/**
 * binary_tree_nodes - Count  nodes with at least 1 child in a binary tree.
 * @tree: Pointer to the root node of the tree to traverse
 * Return: Number of nodes in a tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (count(tree));
}
