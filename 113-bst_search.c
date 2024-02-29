#include "binary_trees.h"
/**
 * bst_search - searches for value in BST
 * @tree: pointer to the root
 * @value: value to search for
 * Return: pointer to the node with the value.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *tmp;

	if (!tree)
		return (NULL);
	tmp = (bst_t *)tree;
	while (tmp)
	{
		if (value == tmp->n)
			return (tmp);
		if (value < tmp->n)
			tmp = tmp->left;
		else
			tmp = tmp->right;
	}
	return (NULL);
}
