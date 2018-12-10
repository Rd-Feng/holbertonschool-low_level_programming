#include "binary_trees.h"
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
