#include "binary_trees.h"
/**
 * binary_tree_nodes - count nodes with at least one child in a binary tree
 * @tree: tree
 *
 * Return: number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree && (tree->left || tree->right))
		return (1 + binary_tree_nodes(tree->left)
				+ binary_tree_nodes(tree->right));
	else
		return (0);
}
