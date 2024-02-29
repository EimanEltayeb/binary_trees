#include "binary_trees.h"
/**
 * array_to_bst - builds a BST from array
 * @array: the array
 * @size: size of array
 * Return: pointer to the root
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *tree = NULL;

	for (i = 0; i < size; i++)
	{
		bst_insert(&tree, array[i]);
	}
	return (tree);
}
