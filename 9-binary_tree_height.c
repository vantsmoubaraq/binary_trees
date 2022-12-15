#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_len = 0, right_len = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_len = 1;
	if (tree->right)
		right_len = 1;

	left_len += binary_tree_height(tree->left);
	right_len += binary_tree_height(tree->right);

	if (left_len > right_len)
		return (left_len);
	return (right_len);
}
