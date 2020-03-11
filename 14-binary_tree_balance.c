#include "binary_trees.h"

int binary_tree_b(const binary_tree_t *tree);

/**
 * binary_tree_balance - Measures the balance of a binary tree
 * @tree: Tree to measure
 * Return: The height of the binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;

	if (!tree)
		return (0);

	balance = binary_tree_b(tree);

	return (balance - 1);
}

/**
 * binary_tree_b - Measures the balance of a binary tree node
 * @tree: Tree node to measure
 * Return: The height of the binary tree node
 */
int binary_tree_b(const binary_tree_t *tree)
{

	int left_b, right_b;

	if (!tree)
		return (0);

	left_b = binary_tree_b(tree->left);
	right_b = binary_tree_b(tree->right);

	return (left_b - right_b + 1);
}
