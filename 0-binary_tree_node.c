#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - The binary tree node
 * @parent: Pointer to the parent node
 * @value: Pointer to the node value
 * Return: 0 on success
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	return (newNode);
}
