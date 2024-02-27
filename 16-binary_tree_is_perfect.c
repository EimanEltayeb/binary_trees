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
	if (binary_tree_balance(tree) != 0)
		return (0);
	else
		return (1);
}
