#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to root
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 1;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	if (tree->left)
		count = count + binary_tree_nodes(tree->left);
	if (tree->right)
		count = count + binary_tree_nodes(tree->left);
	return (count);
}
