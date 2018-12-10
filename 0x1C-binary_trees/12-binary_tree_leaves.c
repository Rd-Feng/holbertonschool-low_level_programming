#include "binary_trees.h"
/**
 * binary_tree_leaves - count leaves in a binary tree
 * @tree: tree
 *
 * Return: number of leaves in a tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree && (tree->left || tree->right))
		return (0 + binary_tree_leaves(tree->left)
				+ binary_tree_leaves(tree->right));
	else if (tree && !(tree->left || tree->right))
		return (1);
	else
		return (0);
}
