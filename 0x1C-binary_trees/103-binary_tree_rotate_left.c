#include "binary_trees.h"
/**
 * binary_tree_rotate_left - rotate left
 * @tree: tree to rotate
 *
 * Return: new root after rotation
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *right = NULL;

	if (!tree || !tree->right)
		return (tree);
	right = tree->right;
	tree->right = right->left;
	if (right->left)
		right->left->parent = tree;
	right->parent = tree->parent;
	right->left = tree;
	tree->parent = right;
	return (right);
}
