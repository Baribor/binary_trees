#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: is a pointer to node to insert the right-child in
 * @value: is the value to store in the new node
 *
 * Description: if parent already has a right-child, the new node must take
 * its place,and the old right-child must be set as the
 * right-child of the new node
 * Return: a pointer to the created node,or NULL on failure or if parent is
 * NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* creating a new node */
	new_node = binary_tree_node(parent, value);
	if (!parent)
		return (NULL); /* if parent is NULL */
	if (!new_node)
		return (NULL); /* memory allocation failed */

	/* if parent already has a right-child, the new node take its place */
	if (parent->right)
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;
	}

	/* set the new node as the right-child of the parent */
	parent->right = new_node;

	return (new_node);
}
