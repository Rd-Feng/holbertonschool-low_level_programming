#include "binary_trees.h"
/**
 * binary_tree_depth - depth of a node
 * @tree: node
 *
 * Return: height of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *p = (binary_tree_t *) tree;
	size_t d = 0;

	while (p)
	{
		p = p->parent;
		d++;
	}
	return (d > 0 ? d - 1 : 0);
}
