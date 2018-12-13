#include "binary_trees.h"
#include <stdio.h>
int bst_inorder_check(binary_tree_t *tree, binary_tree_t **prev);
/**
 * binary_tree_is_bst - check if a tree is bst
 * @tree: tree to check
 *
 * Return: 1 if bst, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	binary_tree_t **prev = NULL;

	if (tree)
		return (bst_inorder_check((binary_tree_t *) tree, prev));
	return (0);
}
/**
 * bst_inorder_check - in order traverse a bst. check if sorted
 * @tree: tree
 * @prev: pointer to previous node
 *
 * Return: 1 if sorted traverse, 0 otherwise
 */
int bst_inorder_check(binary_tree_t *tree, binary_tree_t **prev)
{
	if (tree)
	{
		if (!bst_inorder_check(tree->left, prev))
			return (0);
		if (prev && (*prev)->n >= tree->n)
			return (0);
		prev = &tree;
		if (!bst_inorder_check(tree->right, prev))
			return (0);
	}
	return (1);
}
