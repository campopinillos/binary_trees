#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
  * binary_tree_balance - Checks to see if the binary tree is balanced
  * @tree: tree to measure
  * Return: if tree is weighted left, return positive
  *         if tree is weighted right, return negative.
  *         if tree is balanced, return 0
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_node, right_node;

	if (!tree)
		return (0);
	left_node = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	right_node = tree->right ? binary_tree_height(tree->right) + 1 : 0;
	return (left_node - right_node);
}
