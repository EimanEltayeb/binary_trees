#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		count++;
	else
	{
		count = count + binary_tree_leaves(tree->left);
		count = count + binary_tree_leaves(tree->right);
	}
	return (count);
}
