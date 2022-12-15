#include "binary_trees.h"

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
		len_left = 1 + binary_tree_balance(tree->left);

	if (tree->right)
		len_right = 1 + binary_tree_balance(tree->right);

	return ( len_left - len_right);

}
