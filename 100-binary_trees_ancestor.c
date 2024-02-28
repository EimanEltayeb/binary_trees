#include "binary_trees.h"
/**
 * binary_trees_ancestor - inds the lowest common ancestor
 * @first: first node
 * @second: second node
 * Return: the ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *i, *j, _i, _j;

	_i = *first;
	_j = *second;

	if (!first || !second)
		return (NULL);
	for (i = &_i; i != NULL; i = i->parent)
	{
		for (j = &_j; j != NULL; j = j->parent)
		{
			if (i == j)
				return (i);
		}
	}
	return (NULL);
}
