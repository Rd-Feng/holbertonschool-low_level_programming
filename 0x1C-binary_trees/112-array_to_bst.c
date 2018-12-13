#include "binary_trees.h"
/**
 * array_to_bst - build bst with elements in an array
 * @array: array
 * @size: size of array
 *
 * Return: root of the tree
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *root = NULL;

	if (!array || !size)
		return (NULL);
	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);
	return (root);
}
