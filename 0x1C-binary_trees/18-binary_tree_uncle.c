#include "binary_trees.h"
/**
 * binary_tree_uncle - find uncle of a node
 * @node: node
 *
 * Return: pointer to uncle node, NULL on failure
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent)
		return (binary_tree_sibling(node->parent));
	return (NULL);
}
/**
 * binary_tree_sibling - find the sibling of the node
 * @node: node
 *
 * Return: pointer to sibling node, NULL on failure
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
