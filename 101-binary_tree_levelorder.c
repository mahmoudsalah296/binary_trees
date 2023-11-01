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
 * print_level - prints a level of binary tree
 * @tree: a pointer to the root node of the tree to print
 * @level: level to print at
 * @func: a pointer to a function to call for each node
 */
void print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (level == 0)
	{
		func(tree->n);
	}
	else
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - traverse a binary tree using level-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, i;

	if (tree && func)
	{
		height = binary_tree_height(tree);
		for (i = 0; i < height; i++)
		{
			print_level(tree, i, func);
		}
	}
}
