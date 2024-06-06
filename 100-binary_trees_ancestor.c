#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_trees_ancestor - This function finds the lowest common ancestor
 * if two nodes
 * @first: The first node whose ancestor to find
 * @second: The second node whose ancestor to find
 * Return: The found ancestor, and NULL if no ancestor is found
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *p1, *p2;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	p1 = first->parent;
	p2 = second->parent;
	if (p1 == NULL || first == p2 || (!p1->parent && p2))
	{
		return (binary_trees_ancestor(first, p2));
	}
	else if (p2 == NULL || p1 == second || (!p2->parent && p1))
	{
		return (binary_trees_ancestor(p1, second));
	}
	return (binary_trees_ancestor(p1, p2));
}
