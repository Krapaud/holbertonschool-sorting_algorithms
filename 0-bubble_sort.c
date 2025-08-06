#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * swap - Swaps two elements in an array
 * @array: The array containing the elements to swap
 * @i: Index of the first element
 * @j: Index of the second element
 */
void swap(int *array, int i, int j)
{
	int temp = array[i];

	array[i] = array[j];
	array[j] = temp;
}
/**
 * bubble_sort - Sorts an array of integers in ascending order using
 *               the Bubble sort algorithm
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	int i, j;

	int n = size;

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
			if (array[j] > array[j + 1])
			{
				swap(array, j, j + 1);
				print_array(array, size);
			}
	}
}
