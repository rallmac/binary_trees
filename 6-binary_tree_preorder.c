#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Preorder traversal
 * @tree: The tree to traverse
 * @func: the function to call each node
 * Return: 0 on success
 */
void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
