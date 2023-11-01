#include "binary_trees.h"
#include <limits.h>

/**
 * is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 * @lbound: the lower bound of the node values
 * @ubound: the upper bound of the node values
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int is_bst(const binary_tree_t *tree, int lbound, int ubound)
{
	if (tree == NULL)
		return (1);
	if (tree->n > lbound && tree->n < ubound &&
		is_bst(tree->left, lbound, tree->n) &&
		is_bst(tree->right, tree->n, ubound))
		return (1);
	return (0);
}
/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if tree is a valid BST, and 0 otherwise
 * If tree is NULL, return 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree)
		return (is_bst(tree, INT_MIN, INT_MAX));
	return (0);
}
