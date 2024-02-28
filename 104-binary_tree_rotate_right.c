#include "binary_trees.h"
/**
 * binary_tree_rotate_right - right-rotation on a binary tree
 * @tree: pointer to root
 * Return: new root pointer
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (tree == NULL)
		return (NULL);
	if (tree->right == NULL)
		return (NULL);
	new_root = tree->left;
	new_root->parent = NULL;
	tree->parent = new_root;
	tree->left = new_root->right;
	new_root->right = tree;
	return (new_root);
}
