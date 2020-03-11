#include "binary_trees.h"
/**
 * binary_tree_postorder - Function goes through a tree post-order traversal
 * @tree: Binary tree
 * @func: Print function
 *
 * Description: Function that goes through a binary
 * tree using post-order traversal
 * Return: Nothing void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
