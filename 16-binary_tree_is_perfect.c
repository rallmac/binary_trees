#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_p - This function helps to checks if the binary
 * tree is perfect
 * @tree: The tree to be checked
 * Return: 0 if it is perfect, 1 if it is not perfect
 */
int binary_tree_is_p(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree->left && tree->right)
	{
		left = 1 + binary_tree_is_p(tree->left);
		right = 1 + binary_tree_is_p(tree->right);
		if (left == right && left != 0 && right != 0)
		{
			return (right);
		} return (0);
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

/**
 * binary_tree_is_perfect - This function checks if the binary tree
 * is perfect
 * @tree: The tree to check
 * Return: 0 if perfect and 1 if not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		result = binary_tree_is_p(tree);
		if (result != 0)
		{
			return (1);
		}
		return (0);
	}
}
