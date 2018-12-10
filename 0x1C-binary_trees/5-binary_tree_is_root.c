#include "binary_trees.h"
/**
 * binary_tree_is_root - check if a node is root
 * @node: node to check
 *
 * Return: 1 if root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node ? (!node->parent ? 1 : 0) : 0);
}
