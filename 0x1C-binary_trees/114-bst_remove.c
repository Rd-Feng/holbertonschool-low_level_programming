#include "binary_trees.h"
bst_t *helper_two_children(bst_t *root, bst_t *target);
bst_t *helper_left_child(bst_t *root, bst_t *target);
bst_t *helper_right_child(bst_t *root, bst_t *target);
/**
 * bst_remove - remove a node from bst
 * @root: root of tree to remove node from
 * @value: value to remove
 *
 * Return: new root after remove
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *target = NULL, *parent = NULL;

	if (root)
	{
		target = bst_search(root, value);
		if (!target)
			return (root);
		if (!target->left && !target->right)
		{
			parent = target->parent;
			if (parent)
			{
				if (parent->n < value)
					parent->right = NULL;
				else
					parent->left = NULL;
			}
			free(target);
			return (parent ? root : NULL);
		}
		else if (target->left && !target->right)
		{
			return (helper_left_child(root, target));
		}
		else if (!target->left && target->right)
		{
			return (helper_right_child(root, target));
		}
		else
		{
			return (helper_two_children(root, target));
		}
	}
	return (root);
}
/**
 * bst_search - search bst
 * @tree: tree
 * @value: value to search
 *
 * Return: target node, NULL if not found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree)
	{
		if (value < tree->n)
			return (bst_search(tree->left, value));
		else if (value > tree->n)
			return (bst_search(tree->right, value));
		return ((bst_t *) tree);
	}
	return (NULL);
}
/**
 * helper_left_child - remove node with only left child
 * @root: root of tree
 * @target: node to remove
 *
 * Return: new root after remove
 */
bst_t *helper_left_child(bst_t *root, bst_t *target)
{
	bst_t *parent = NULL, *s = NULL;

	parent = target->parent;
	s = target->left;
	if (parent)
	{
		if (parent->n < target->n)
			parent->right = s;
		else
			parent->left = s;
		s->parent = parent;
		free(target);
		return (root);
	}
	s->parent = NULL;
	free(target);
	return (s);
}
/**
 * helper_right_child - remove node with only right child
 * @root: root of tree
 * @target: node to remove
 *
 * Return: new root after remove
 */
bst_t *helper_right_child(bst_t *root, bst_t *target)
{
	bst_t *parent = NULL, *s = NULL;

	parent = target->parent;
	s = target->right;
	if (parent)
	{
		if (parent->n < target->n)
			parent->right = s;
		else
			parent->left = s;
		s->parent = parent;
		free(target);
		return (root);
	}
	s->parent = NULL;
	free(target);
	return (s);
}
/**
 * helper_two_children - remove a node with two children
 * @root: root of tree
 * @target: target to remove
 *
 * Return: new root after remove
 */
bst_t *helper_two_children(bst_t *root, bst_t *target)
{
	bst_t *parent = NULL, *s = NULL, *temp;

	for (s = target->right; s->left; s = s->left)
		;
	parent = target->parent;
	if (target->right == s)
	{
		s->parent = parent;
		if (parent)
		{
			if (parent->n < target->n)
				parent->right = s;
			else
				parent->left = s;
		}
		s->left = target->left;
		s->left->parent = s;
		free(target);
		return (parent ? root : s);
	}
	else
	{
		temp = target->parent;
		target->parent = s->parent;
		s->parent = temp;
		temp = target->left;
		target->left = s->left;
		s->left = temp;
		temp = target->right;
		target->right = s->right;
		s->right = temp;
		if (parent)
		{
			if (parent->n < target->n)
				parent->right = s;
			else
				parent->left = s;
		}
		s->left->parent = s;
		s->right->parent = s;
		target->parent->left = target;
		if (target->right)
		{
			target->right->parent = target;
			helper_right_child(root, target);
		}
		else
		{
			target->parent->left = NULL;
			free(target);
		}
		return (parent ? root : s);
	}
}
