#include "binary_trees.h"
/**
 * binary_trees_ancestor - find lowest comman ancestor of two nodes
 * @first: first node
 * @second: second node
 *
 * Return: pointer to ancestor, NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	int Ldepth = binary_tree_depth(first), Sdepth = binary_tree_depth(second);
	int tempDepth;
	binary_tree_t *temp;

	if (!first || !second)
		return (NULL);
	if (Ldepth < Sdepth)
	{
		temp = (binary_tree_t *) first;
		first = (binary_tree_t *) second;
		second = temp;
		tempDepth = Sdepth;
		Sdepth = Ldepth;
		Ldepth = tempDepth;
	}
	while (Ldepth != Sdepth)
	{
		first = first->parent;
		Ldepth--;
	}
	while (Ldepth > 0)
	{
		if (first == second)
			return ((binary_tree_t *) first);
		Ldepth--;
		first = first->parent;
		second = second->parent;
	}
	if (first == second)
		return ((binary_tree_t *) first);
	else
		return (NULL);

}
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
	return (d - 1);
}
