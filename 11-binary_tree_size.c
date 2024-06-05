#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - This function measures the size of a binary tree
 * @tree: The tree to measure
 * Return: The measured value and 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;
	size_t total;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		l = binary_tree_size(tree->left);
		r = binary_tree_size(tree->right);
		total = r + l + 1;
	}
	return (total);
}
