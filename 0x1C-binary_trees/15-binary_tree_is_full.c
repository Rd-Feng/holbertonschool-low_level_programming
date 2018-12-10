#include "binary_trees.h"
/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: tree
 *
 * Return: 1 if full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree && ((tree->left && tree->right) || (!tree->left && !tree->right)))
	{
		if (tree->left)
			return (1 & binary_tree_is_full(tree->left)
					& binary_tree_is_full(tree->right));
		else
			return (1);
	}
	return (0);
}
