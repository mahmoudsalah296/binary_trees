#include "binary_trees.h"

/**
 * height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: height of the tree or 0 If tree is NULL
 */
int height(binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int leftHeight = height(tree->left);
	int rightHeight = height(tree->right);

	return ((leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 *@tree: pointer to the root node of the tree to measure the balance factor.
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	printf("left: %d\n", height(tree->left));
	printf("right: %d\n", height(tree->right));
	return (height(tree->left) - height(tree->right));
}
