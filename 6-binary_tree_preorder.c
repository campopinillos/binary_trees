#include "binary_trees.h"
/**
 * binary_tree_preorder - Function that goes through a binary tree using pre-order traversal
 * @node: Node
 *
 * Description: Function that goes through a binary tree using pre-order traversal
 * Return: Nothing void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}