#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures
 * the depth of a node in a binary tree
 *
 * @tree: pointer to the node to measure the depth
 * Return: the depth of a node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *temp = (binary_tree_t *)tree;

	if (!temp)
		return (0);

	while (temp->parent)
	{
		depth++;
		temp = temp->parent;
	}
	return (depth);
}
