#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to root
 * Return: 0 or 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int x = 1;

	if (!tree)
		return (0);
	if (tree->right && !tree->left)
		return (0);
	if (!tree->right && tree->left)
		return (0);
	if (tree->right)
		x = binary_tree_is_full(tree->right);
	if (x == 0)
		return (0);
	if (tree->left)
		x = binary_tree_is_full(tree->right);
	if (x == 0)
		return (0);
	return (1);
}
