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

	if (size <= 1)
		return;

	pivot = array[size - 1];
	while (k < size )
	{
		if(array[k] < pivot)
		{
			if(array[i] < array[k])
			{
				s = array[i];
				array[i] = array[k];
				array[k] = s;
				i++;
				print_array(array, size);
			}
		}
		k++;
	}
	if (array[i] > pivot)
	{
		s = array[i];
		array [i] = pivot;
		array[size - 1] = s;
		print_array(array, size);
	}

	quick_sort(array, i);
	quick_sort(array + i +1, size - i -1);
}
