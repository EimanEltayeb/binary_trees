#include "binary_trees.h"
/**
 * binary_tree_levelorder - level-order traversal
 * @tree: the root pointer
 * @func: the function
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *s[1000], *c;
	int f = 0, r = 0;

	if (!tree || !func)
		return;
	s[r++] = (binary_tree_t *)tree;
	while (f < r)
	{
		c = s[f++];
		func(c->n);
		if (c->left)
			s[r++] = c->left;
		if (c->right)
			s[r++] = c->right;
	}
}
