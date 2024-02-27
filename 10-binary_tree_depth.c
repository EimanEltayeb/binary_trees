#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node
 * @tree: root pointer
 * Return: the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *temp, cpy;

	if (!tree)
		return (0);
	cpy = *tree;
	temp = &cpy;
	while (temp->parent)
	{
		depth++;
		temp = temp->parent;
	}
	return (depth);
}
