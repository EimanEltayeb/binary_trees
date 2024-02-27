#include "binary_trees.h"

/**
 * _bi_hi - measures the hight of the binary tree
 * @tree: the root pointer
 * Return: the hight
 */
int _bi_hi(const binary_tree_t *tree)
{
	int l_hight, r_hight;

	if (tree == NULL)
		return (0);
	if (tree->left)
		l_hight = 1 + _bi_hi(tree->left);
	else
		l_hight = 0;
	if (tree->right)
		r_hight = 1 + _bi_hi(tree->right);
	else
		r_hight = 0;
	if (l_hight > r_hight)
		return (l_hight);
	else
		return (r_hight);
}

/**
 * binary_tree_balance - measures the balance factor
 * @tree: pointer to the root
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int factor, l = 0, r = 0;

	if (!tree)
		return (0);
	if (!tree->left)
		l = 0;
	else
		l = _bi_hi(tree->left) + 1;
	if (!tree->right)
		r = 0;
	else
		r = _bi_hi(tree->right) + 1;

	factor =  l - r;
	return (factor);
}
