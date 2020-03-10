#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree.
 * @tree: Tree to delete
 * Return:
 */

void binary_tree_remove(binary_tree_t *tree);

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (!tree->parent)
		binary_tree_remove(tree);
	else
		binary_tree_delete(tree->parent);	
}

void binary_tree_remove(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_remove(tree->left);
	binary_tree_remove(tree->right);
	free(tree);
}
