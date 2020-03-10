#include "binary_trees.h"

void binary_tree_remove(binary_tree_t *tree);

/**
 * binary_tree_delete - Deletes a binary tree.
 * @tree: Tree to delete
 * Return:
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (!tree->parent)
		binary_tree_remove(tree);
	else
		binary_tree_delete(tree->parent);
}

/**
 * binary_tree_remove - Removes a binary tree node.
 * @tree: Node to remove
 * Return:
 */
void binary_tree_remove(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_remove(tree->left);
	binary_tree_remove(tree->right);
	free(tree);
}
