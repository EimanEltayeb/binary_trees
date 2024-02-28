#include "binary_trees.h"
/**
 * binary_trees_ancestor - inds the lowest common ancestor
 * @first: first node
 * @second: second node
 * Return: the ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *i, *j;

	if (!first || !second)
		return (NULL);

	for (i = (binary_tree_t *)first; i != NULL; i = i->parent)
	{
		for (j = (binary_tree_t *)second; j != NULL; j = j->parent)
		{
			if (j == i)
				return (i);
		}
	}
	return (NULL);
}
