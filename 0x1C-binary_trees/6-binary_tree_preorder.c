#include "binary_trees.h"
/**
 * binary_tree_preorder - preorder traversal
 * @tree: tree to traverse
 * @func: function to call on node data
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
