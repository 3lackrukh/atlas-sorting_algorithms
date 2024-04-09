#include "sort.h"

/**
 * quick_sort- sorts an array of integers in ascending order,
 * printing the after every swap.
 *
 * @array: pointer to the array to be sorted.
 *
 * @size: the size of the array.
 *
 * Return: nothing.
 */

void quick_sort(int *array, size_t size)
{
	size_t i = 0, k = 0;
	int s, pivot;

	pivot = array[(size - 1)];
	while (k < (size - 1))
	{
		if(array[k] < pivot)
		{
			s = array[i];
			array[i] = array[k];
			array[k] = s;
			print_array(array, size);
			i++;
		}
		k++;
	}
	s = array[i];
	array [i] = pivot;
	pivot = s;
	print_array(array, size);
}

