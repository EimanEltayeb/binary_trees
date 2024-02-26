#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node to the right
 * @parent: the node's parent
 * @value: the int value
 * Return: pointer to the  reated node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	if (parent->right == NULL)
	{
		parent->right = new;
		new->right = NULL;
	}
	else
	{
		parent->right->parent = new;
		new->right = parent->right;
		parent->right = new;
	}
	return (new);
}
