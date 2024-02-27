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
		x = binary_tree_is_full(tree->left);
	if (x == 0)
		return (0);
	return (1);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_full(tree) == 0)
		return (0);
	else
		return (1);
}
