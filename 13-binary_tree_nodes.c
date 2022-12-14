#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return:  count of the nodes with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t one_child_count = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		one_child_count = 1;

	one_child_count += binary_tree_nodes(tree->left);
	one_child_count += binary_tree_nodes(tree->right);

	return (one_child_count);
}
