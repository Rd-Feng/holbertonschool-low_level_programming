#include "binary_trees.h"
void push_nodes(binary_tree_t *tree, int depth, binary_tree_t **arr);
/**
 * binary_tree_levelorder - level order traverse
 * @tree: tree to traverse
 * @func: function to call on node data
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int i, j, size = 1, height = binary_tree_height(tree);
	binary_tree_t **arr = NULL;

	if (!tree || !func)
		return;
	for (i = 0; i < height; i++)
		size *= 2;
	arr = malloc(sizeof(binary_tree_t *) * size);
	if (!arr)
		exit(-1);
	for (i = 0; i < size; i++)
		arr[i] = NULL;
	for (i = 0; i <= height; i++)
	{
		push_nodes((binary_tree_t *) tree, i, arr);
		for (j = 0; arr[j]; j++)
		{
			func(arr[j]->n);
			arr[j] = NULL;
		}
	}
	free(arr);
}
/**
 * push_nodes - put all nodes of depth into array
 * @tree: root node
 * @depth: target depth
 * @arr: array to hold nodes
 */
void push_nodes(binary_tree_t *tree, int depth, binary_tree_t **arr)
{
	int i;

	if (tree && depth == 0)
	{
		for (i = 0; arr[i]; i++)
			;
		arr[i] = tree;
	}
	else if (tree)
	{
		push_nodes(tree->left, depth - 1, arr);
		push_nodes(tree->right, depth - 1, arr);
	}
}
/**
 * binary_tree_height - height of a tree
 * @tree: tree
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree && (tree->left || tree->right))
		return (1 + _max(binary_tree_height(tree->left),
					binary_tree_height(tree->right)));
	return (0);
}
/**
 * _max - find max of two number
 * @a: number
 * @b: number
 *
 * Return: max of two number
 */
size_t _max(size_t a, size_t b)
{
	return (a > b ? a : b);
}
