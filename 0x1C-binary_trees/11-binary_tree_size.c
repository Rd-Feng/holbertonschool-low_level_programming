#include "binary_trees.h"
/**
 * binary_tree_size - size of a binary tree
 * @tree: tree
 *
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (1 + binary_tree_size(tree->left)
				+ binary_tree_size(tree->right));
	return (0);
}
