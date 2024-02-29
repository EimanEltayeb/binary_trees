#include "binary_trees.h"
/**
 * bst_remove - emoves a node from a Binary Search Tree
 * @root: root pointer
 * @value: value to delete
 * Return: new root
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *tmp, *new_tmp;

	if (!root)
		return (NULL);
	tmp = root;
	while (tmp)
	{
		if (value < tmp->n)
			tmp = tmp->left;
		else if (value > tmp->n)
			tmp = tmp->right;
		else
			break;
	}
	if (!tmp->right && !tmp->left)
	{
		if (tmp->parent->left == tmp)
			tmp->parent->left = NULL;
		else
			tmp->parent->right = NULL;
	}
	else if (tmp->right)
	{
		if (tmp->right->left)
		{
			new_tmp = tmp->right->left;
			new_tmp->parent = tmp->parent;
			new_tmp->left = tmp->left;
			if (tmp->left)
				tmp->left->parent = new_tmp;
			new_tmp->right = tmp->right;
			tmp->right->parent = new_tmp;
			tmp->right->left = NULL;
		}
		else
		{
			new_tmp = tmp->right;
			new_tmp->parent = tmp->parent;
			new_tmp->left = tmp->left;
			if (tmp->left)
				tmp->left->parent = new_tmp;
			if (tmp->parent->right == tmp)
				tmp->parent->right = new_tmp;
			else
				tmp->parent->left = new_tmp;
		}
	}
	else
	{
		new_tmp = tmp->left;
			if (tmp->left)
				new_tmp->parent = tmp->parent;
			if (tmp->parent->right == tmp)
				tmp->parent->right = new_tmp;
			else
				tmp->parent->left = new_tmp;
		}

	free(tmp);
	if (new_tmp->parent == NULL)
		return (new_tmp);
	return (root);
}
