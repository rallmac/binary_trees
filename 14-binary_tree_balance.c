#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_h_bal - This function measures the height balance factor
 * of a binary tree
 * @tree: The tree to be measured
 * Return: The measured value of the height
 */
int binary_tree_h_bal(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_h_bal(tree->left) : 1;
			r = tree->right ? 1 + binary_tree_h_bal(tree->right) : 1;
		}
		return ((l > r) ? l : r);
	}
}

/**
 * binary_tree_balance - Measures the balance factor of the tree
 * @tree: The tree to measure
 * Return: The meaured value
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int rt = 0;
	int lt = 0;
	int total = 0;

	if (tree)
	{
		lt = ((int)binary_tree_h_bal(tree->left));
		rt = ((int)binary_tree_h_bal(tree->right));
		total = lt - rt;
	}
	return (total);
}
