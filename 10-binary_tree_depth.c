#include "binary_trees.h"

/**
 * binary_tree_depth - depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: Depth of the node, tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (tree && tree->parent)
	{
		depth = binary_tree_depth(tree->parent) + 1;
	}

	return (depth);
}
