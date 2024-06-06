#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - This function counts the node with
 * at least 1 child
 * @tree: The tree to count
 * Return: 0 in success
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node += ((tree->left) || (tree->right)) ? 1 : 0;
		node += binary_tree_nodes(tree->left);
		node += binary_tree_nodes(tree->right);
		return (node);
	}
}
