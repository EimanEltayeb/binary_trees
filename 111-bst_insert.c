#include "binary_trees.h"
/**
 * bst_insert -  inserts a value in a Binary Search Tree
 * @tree: pointer to root
 * @value: value of the inserted node
 * Return: pointer to the inserted node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp, *parent;

	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	tmp = *tree;
	parent = NULL;
	while (1)
	{
		parent = tmp;
		if (value == tmp->n)
			return (NULL);
		if (value > tmp->n)
		{
			tmp = tmp->right;
			if (tmp == NULL)
			{
				parent->right = binary_tree_node(parent, value);
				return (parent->right);
			}
		}
		else
		{
			tmp = tmp->left;
			if (tmp == NULL)
			{
				parent->left = binary_tree_node(parent, value);
				return (parent->left);
			}
		}
	}
}

