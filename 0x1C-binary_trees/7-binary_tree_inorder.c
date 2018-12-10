#include "binary_trees.h"
/**
 * binary_tree_inorder - in order traversal
 * @tree: tree to traverse
 * @func: function to call on node data
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
