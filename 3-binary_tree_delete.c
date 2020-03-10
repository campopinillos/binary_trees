#include "binary_trees.h"
/**
 * binary_tree_delete - Function that deletes an entire binary tree
 * @tree: Binary tree
 *
 * Description: Function that deletes an entire binary tree
 * Return: Nothing void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
