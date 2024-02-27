#include "binary_trees.h"

/**
 * _binary_tree_height - measures the hight of the binary tree
 * @tree: the root pointer
 * Return: the hight
 */
int _binary_tree_height(const binary_tree_t *tree)
{
	int l_hight, r_hight;

	if (tree == NULL)
		return (0);
	if (tree->left)
		l_hight = 1 + _binary_tree_height(tree->left);
	else
		l_hight = 0;
	if (tree->right)
		r_hight = 1 + _binary_tree_height(tree->right);
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
	int factor;

	if (!tree)
		return (0);

	factor =  _binary_tree_height(tree->left) -  _binary_tree_height(tree->right);
	
	printf("\nleft = %d\n", _binary_tree_height(tree->left));
	printf("right = %d\n", _binary_tree_height(tree->right));
	return (factor);
}
