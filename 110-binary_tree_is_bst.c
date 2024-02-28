#include "binary_trees.h"
/**
 * binary_tree_is_bst - checks if a binary tree is a valid BST
 * @tree:pointer to root
 * Return: 0 or 1;
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left)
	{
		if (tree->left->n > tree->n)
			return (0);
		if (binary_tree_is_bst(tree->left) == 0)
			return (0);
	}
	if (tree->right)
	{
		if (tree->right->n < tree->n)
			return (0);
		if (binary_tree_is_bst(tree->right) == 0)
			return (0);
	}
	return (1);
}
