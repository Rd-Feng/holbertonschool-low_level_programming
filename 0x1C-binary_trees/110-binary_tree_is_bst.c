#include "binary_trees.h"
#include <stdio.h>
int bst_inorder_check(binary_tree_t *tree, int *prev);
/**
 * binary_tree_is_bst - check if a tree is bst
 * @tree: tree to check
 *
 * Return: 1 if bst, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int *prev = NULL, ret;

	if (!tree)
		return (0);
	ret = bst_inorder_check((binary_tree_t *) tree, prev);
	if (prev)
		free(prev);
	return (ret);
}
/**
 * bst_inorder_check - in order traverse a bst. check if sorted
 * @tree: tree
 * @prev: data in previous node
 *
 * Return: 1 if sorted traverse, 0 otherwise
 */
int bst_inorder_check(binary_tree_t *tree, int *prev)
{
	if (tree)
	{
		if (bst_inorder_check(tree->left, prev))
		{
			if (prev && tree->n < *prev)
				return (0);
			if (!prev)
				prev = malloc(sizeof(int));
			*prev = tree->n;
			if (!bst_inorder_check(tree->right, prev))
				return (0);
			return (1);
		}
		return (0);
	}
	return (1);
}
