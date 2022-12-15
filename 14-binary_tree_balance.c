#include "binary_trees.h"

/**
 * max_height_tree - maximum height on both sides
 * @tree: a pointer to the root node of the tree to measure
 * Return: maximum height
 */

int max_height_tree(const binary_tree_t *tree)
{
	int max_left = 0, max_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		max_left = 1 + max_height_tree(tree->left);

	if (tree->right)
		max_right = 1 + max_height_tree(tree->right);

	if (max_left > max_right)
		return (max_left);
	return (max_right);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int len_left = 0, len_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		len_left = 1 + max_height_tree(tree->left);

	if (tree->right)
		len_right = 1 + max_height_tree(tree->right);

	return (len_left - len_right);
}
