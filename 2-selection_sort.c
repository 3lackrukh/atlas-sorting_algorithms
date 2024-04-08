 #include "sort.h"

/**
 * selection_sort- sorts an array of integers into ascending order,
 * prints the array after each swap.
 *
 * @array: the array of integers to be sorted.
 *
 * @size: the size of the array.
 *
 * Return: nothing.
 */

void selection_sort(int *array, size_t size)
{
	int s;
	size_t i = 0, k = 1, min;

	while (i < (size -1))
	{
		min = i;
		while (k < size)
		{
			if (array[min] > array[k])
				min = k;
			k++;
		}
		if (array[min] < array[i])
		{
			s = array[min];
			array[min] = array[i];
			array[i] = s;
			print_array(array, size);
		}
		k = (i + 2);
		i++;
	}
}
