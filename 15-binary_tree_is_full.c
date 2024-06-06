#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - This function checks if the binary tree is full
 * @tree: The tree to check
 * Return: The checked status
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
			l = binary_tree_is_full(tree->left);
			r = binary_tree_is_full(tree->right);
			if (l == 0 || r == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!tree->left && !tree->right)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
