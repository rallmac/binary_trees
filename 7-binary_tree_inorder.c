#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse through binary tree inorder
 * @tree: The tree to traverse
 * @func: The function thats calls the traversed tree
 * Return: 0 on success
 */
void binary_tree_inorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
