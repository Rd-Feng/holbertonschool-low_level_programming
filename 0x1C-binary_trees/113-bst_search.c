#include "binary_trees.h"
/**
 * bst_search - search bst
 * @tree: tree
 * @value: value to search
 *
 * Return: target node, NULL if not found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree)
	{
		if (value < tree->n)
			return (bst_search(tree->left, value));
		else if (value > tree->n)
			return (bst_search(tree->right, value));
		return ((bst_t *) tree);
	}
	return (NULL);
}
