#include "binary_trees.h"
/**
 * bst_insert - insert into binary search tree
 * @tree: tree to insert
 * @value: value to insert
 *
 * Return: created node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *ptr = NULL;

	if (tree)
	{
		if (!*tree)
		{
			*tree = binary_tree_node(NULL, value);
			return (*tree);
		}
		ptr = *tree;
		while (ptr)
		{
			if (value < ptr->n && !ptr->left)
				return (binary_tree_insert_left(ptr, value));
			if (value > ptr->n && !ptr->right)
				return (binary_tree_insert_right(ptr, value));
			if (value < ptr->n)
				ptr = ptr->left;
			else if (value > ptr->n)
				ptr = ptr->right;
			else
				return (NULL);
		}
	}
	return (NULL);
}
/**
 * binary_tree_insert_left - insert a node as left child
 * @parent: node to insert to
 * @value: value to insert
 *
 * Return: pointer to inserted new node, null on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *p = NULL;

	if (parent)
	{
		p = malloc(sizeof(*p));
		if (p)
		{
			p->n = value;
			p->parent = parent;
			p->left = parent->left ? parent->left : NULL;
			p->right = NULL;
			parent->left = p;
			if (p->left)
				p->left->parent = p;
		}
	}
	return (p);
}
/**
 * binary_tree_insert_right - insert a node as right child
 * @parent: node to insert to
 * @value: value to insert
 *
 * Return: pointer to inserted new node, null on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *p = NULL;

	if (parent)
	{
		p = malloc(sizeof(*p));
		if (p)
		{
			p->n = value;
			p->parent = parent;
			p->right = parent->right ? parent->right : NULL;
			p->left = NULL;
			parent->right = p;
			if (p->right)
				p->right->parent = p;
		}
	}
	return (p);
}
