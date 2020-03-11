#include "binary_trees.h"
/**
 * binary_tree_is_root - Function that checks  checks if is a root
 * @node: Node
 *
 * Description: Function that checks  checks if a given node is a root
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
