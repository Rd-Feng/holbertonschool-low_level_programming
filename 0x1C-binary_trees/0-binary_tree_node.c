#include "binary_trees.h"
/**
 * binary_tree_node - create a binary tree node
 * @parent: parent node
 * @value: value in current node
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *p = NULL;

	p = malloc(sizeof(*p));
	if (p)
	{
		p->n = value;
		p->parent = parent;
		p->left = NULL;
		p->right = NULL;
	}
	return (p);
}
