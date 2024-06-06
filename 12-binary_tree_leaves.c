#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - This function counts the leaves of a tree
 * @tree: The tree to be counted
 * Return: The leaves of the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;
	size_t r = 0;
	size_t l = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		l = binary_tree_leaves(tree->left);
		r = binary_tree_leaves(tree->right);
		leaf = l + r;
		return ((!l && !r) ? leaf + 1 : leaf + 0);
	}

}
