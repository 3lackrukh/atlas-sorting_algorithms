#include "sort.h"

/**
 * bubble_sort- sorts an array of integers in ascending order,
 * printing the array each time an integer swap is made.
 *
 * @array: pointer to the array of integers to be sorted.
 *
 * @size: the size of the array.
 *
 * Return: nothing.
 */

void bubble_sort(int *array, size_t size)
{
	int temp, sorted = 0;
	size_t i;

	while (!sorted)
	{
		sorted = 1;
		for (i = 0; i < (size - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				sorted = 0;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
