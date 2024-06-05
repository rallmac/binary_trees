#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - The function checks if the tree has a leaf
 * @node: The node to be checked
 * Return: 1 if node is a leaf and 0 if node is not a leaf or if
 * node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}

	return (0);
}
