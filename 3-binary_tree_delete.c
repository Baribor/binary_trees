#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: is a pointer to the root node of the tree to delete
 *
 * Return: nothing, if tree is NULL, do nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return; /* Base_case: if Tree is empty or NULL */

	/* deleting the left and right subtrees recursively */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree); /* free the memory of current node */
}
