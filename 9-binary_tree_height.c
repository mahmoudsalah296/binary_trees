#include "binary_trees.h"

/**
 * max - return max of two numbers
 * @x: number 1
 * @y: number 2
 * Return: the max number
 */
size_t max(size_t x, size_t y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: a pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 * If node is NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right || node->left)
		return (0);
	else
		return (1);
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: height of the tree or 0 If tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height, left_height;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (max(right_height, left_height) + 1);
}
