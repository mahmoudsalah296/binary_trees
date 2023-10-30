#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: the depth or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;
	binary_tree_t *tmp;

	if (tree == NULL)
		return (0);
	tmp = (binary_tree_t *)(tree);
	while (tmp->parent)
	{
		depth++;
		tmp = tmp->parent;
	}
	return (depth);
}
