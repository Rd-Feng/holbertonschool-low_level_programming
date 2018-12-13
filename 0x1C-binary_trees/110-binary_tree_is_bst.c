#include "binary_trees.h"
#include <limits.h>
#include <stdio.h>
int bst_inorder_check(binary_tree_t *tree, int *p);
/**
 * binary_tree_is_bst - check if a tree is bst
 * @tree: tree to check
 *
 * Return: 1 if bst, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int *p = malloc(sizeof(int));

	*p = INT_MIN;
	if (tree)
		return (bst_inorder_check((binary_tree_t *) tree, p));
	return (0);
}
/**
 * bst_inorder_check - in order traverse a bst. check if sorted
 * @tree: tree
 * @p: min value so far
 *
 * Return: 1 if sorted traverse, 0 otherwise
 */
int bst_inorder_check(binary_tree_t *tree, int *p)
{
	if (tree)
	{
		if (!bst_inorder_check(tree->left, p))
			return (0);
		printf("cur: %d, prev: %d\n", tree->n, *p);
		if (*p >= tree->n)
			return (0);
		*p = tree->n;
		if (!bst_inorder_check(tree->right, p))
			return (0);
	}
	return (1);
}
