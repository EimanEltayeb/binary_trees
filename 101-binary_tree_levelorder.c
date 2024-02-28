#include "binary_trees.h"
/**
 * binary_tree_levelorder - level-order traversal
 * @tree: the root pointer
 * @func: the function
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return (NULL);
	func(tree->n);
}
