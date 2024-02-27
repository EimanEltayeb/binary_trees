#include "binary_trees.h"
/**
 * binary_tree_height - measures the hight of the binary tree
 * @tree: the root pointer
 * Return: the hight
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_hight, r_hight;

	if (tree == NULL)
		return (0);
	if (tree->left)
		l_hight = 1 + binary_tree_height(tree->left);
	else
		l_hight = 0;
	if (tree->right)
		r_hight = 1 + binary_tree_height(tree->right);
	else
		r_hight = 0;
	if (l_hight > r_hight)
		return (l_hight);
	else
		return (r_hight);
}
