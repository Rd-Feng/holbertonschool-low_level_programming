#include "binary_trees.h"
/**
 * binary_tree_rotate_right - rotate right
 * @tree: tree to rotate
 *
 * Return: new root after rotation
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *left = NULL;

	if (!tree || !tree->left)
		return (tree);
	left = tree->left;
	tree->left = left->right;
	if (left->right)
		left->right->parent = tree;
	left->parent = tree->parent;
	left->right = tree;
	tree->parent = left;
	return (left);
}
