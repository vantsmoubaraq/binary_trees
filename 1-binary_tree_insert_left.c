#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return:  a pointer to the created node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL, *old_left = NULL;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);

	old_left = parent->left;
	parent->left = new;

	if (old_left)
	{
		old_left->parent = new;
		new->left = old_left;
	}

	return (new);
}
