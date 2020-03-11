#include "binary_trees.h"
/**
 * binary_tree_nodes - Function that  counts the nodes
 * @tree: Binary tree
 *
 * Description: Function that that  counts the nodes
 * with at least 1 child in a binary tree
 * Return: Nothing void
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);
	nodes += (tree->left || tree->right) ?
			binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1 : 0;
	return (nodes);
}
