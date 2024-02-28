#include "binary_trees.h"
/**
 * binary_tree_rotate_left -  left-rotation on a binary tree
 * @tree: pointer to root
 * Return: new root pointer
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (tree == NULL)
		return (NULL);
	new_root = tree->right;
	new_root->parent = NULL;
	tree->parent = new_root;
	tree->right = new_root->left;
	new_root->left = tree;
	return (new_root);
}
