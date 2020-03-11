#include "binary_trees.h"
/**
 * binary_tree_inorder - Function that goes through a tree in-order traversal
 * @tree: Binary tree
 * @func: Print function
 *
 * Description: Function that goes through a binary
 * tree using in-order traversal
 * Return: Nothing void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
