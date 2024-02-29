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
		if (value == tmp->n)
		{
			if (tmp->right->left)
			{
				new_tmp = tmp->right->left;
				//new_tmp->parent = tmp->parent;
				new_tmp->left = tmp->left;
				tmp->left->parent = new_tmp;
				new_tmp->right = tmp->right;
				tmp->right->parent = new_tmp;
				tmp->right->left = NULL;
			}
			else if (tmp->right)
			{
				new_tmp = tmp->right;

			}
			else if
			{
			}
			new_tmp->parent = tmp->parent;






			new_tmp = tmp->right;
			new_tmp->parent = tmp->parent;
			if (tmp->parent)
			{
				if (tmp->parent->right == tmp)
					tmp->parent->right = new_tmp;
				else
					tmp->parent->left = new_tmp;
			}
			new_tmp
