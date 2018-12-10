#include "binary_trees.h"
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
