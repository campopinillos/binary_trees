#include "binary_trees.h"
/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree
 * @tree: Binary tree
 *
 * Description: Function that that counts the leaves in a binary tree
 * Return: Nothing void
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);
	leaves += tree->left ? 1 : 0;
	leaves += tree->right ? 1 : 0;
	return (leaves);
}
