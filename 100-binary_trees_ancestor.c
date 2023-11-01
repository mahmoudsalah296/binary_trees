#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 *		or NULL if no common ancestor found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	binary_tree_t *first_ancestor[100];
	binary_tree_t *tmp;
	int i, nodes_num = 0;

	tmp = (binary_tree_t *)first;
	i = 0;
	while (tmp)
	{
		first_ancestor[i] = tmp;
		nodes_num++;
		tmp = tmp->parent;
		i++;
	}

	tmp = (binary_tree_t *)second;
	while (tmp)
	{
		for (i = 0; i < nodes_num; i++)
		{
			if (tmp == first_ancestor[i])
				return (tmp);
		}
		tmp = tmp->parent;
	}
	return (NULL);
}
