#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: if tree is NULL, your function must return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		int leftHeight = binary_tree_height(tree->left);
		int rightHeight = binary_tree_height(tree->right);

		return ((leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1));
	}
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree:  a pointer to the root node of the tree to check
 * Return: 1 if it is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
	{
		if (binary_tree_balance(tree) == 0)
			return (1);
	}
	return (0);
}
