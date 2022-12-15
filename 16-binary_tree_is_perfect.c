#include "binary_trees.h"

/**
 * size - sizee of tree
 * @tree: pointer to root
 * Return: size of tree
 */

int size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + size(tree->left) + size(tree->right));
}

/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect or 0 otherwisw
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size_left, size_right, compare;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	size_left = size(tree->left);
	size_right = size(tree->right);

	compare = size_left - size_right;

	if (compare == 0)
		return (1);

	return (0);
}
