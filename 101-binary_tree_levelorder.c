#include "binary_trees.h"
/**
 * binary_tree_levelorder - level-order traversal
 * @tree: the root pointer
 * @func: the function
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *sort[1000];
	binary_tree_t *current;
	int front = 0, rear = 0;

	if (!tree || !func)
		return;

	sort[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		current = sort[front++];
		func(current->n);

		if (current->left)
			sort[rear++] = current->left;

		if (current->right)
			sort[rear++] = current->right;
	}
}
