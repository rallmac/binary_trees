#include <stdlib.h>
#include "binary_trees.h"

/**
 * heap_to_sorted_array - Converts a Binary Max Heap to a
 * sorted array of integers.
 * @heap: The pointer to the root node of the heap to convert.
 * @size: The address to store the size of the array.
 * Return: A pointer to the sorted array.
 */
int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
	int *array;
	size_t i;
	heap_t *copy = heap;

	if (!heap || !size)
		return (NULL);

	*size = 0;
	while (copy)
	{
		(*size)++;
		if (copy->left)
			copy = copy->left;
		else if (copy->right)
			copy = copy->right;
		else
			break;
	}

	array = malloc(sizeof(int) * (*size));
	if (!array)
		return (NULL);

	for (i = 0; i < *size; i++)
	{
		array[i] = heap_extract(&heap);
	}

	return (array);
}
