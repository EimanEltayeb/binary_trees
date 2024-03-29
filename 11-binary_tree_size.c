#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: the root pointer
 * Return: the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (!tree)
		return (0);
	if (tree->left)
		size = size  + binary_tree_size(tree->left);
	if (tree->right)
		size = size  + binary_tree_size(tree->right);
	return (size);
}
