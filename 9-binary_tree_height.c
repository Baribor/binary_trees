#include "binary_trees.h"

/**
 * height - function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 * @h: The height tracker
 * Return: height of a binary tree
 */
size_t height(const binary_tree_t *tree, size_t h)
{
	size_t left, right;

	if (!tree)
		return (h);

	left = height(tree->left, h + 1);
	right = height(tree->left, h + 1);
	return (left > right ? left : right);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	h = height(tree, 0);
	return (h);
}
