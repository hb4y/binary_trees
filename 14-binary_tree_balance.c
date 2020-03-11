#include "binary_trees.h"

int binary_tree_b(const binary_tree_t *tree);
size_t binary_tree_h(const binary_tree_t *tree);

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

	return (balance);
}

/**
 * binary_tree_b - Measures the balance of a binary tree node
 * @tree: Tree node to measure
 * Return: The height of the binary tree node
 */
int binary_tree_b(const binary_tree_t *tree)
{

	size_t left_b, right_b;

	left_b = binary_tree_h(tree->left);
	right_b = binary_tree_h(tree->right);

	return (left_b - right_b);
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
