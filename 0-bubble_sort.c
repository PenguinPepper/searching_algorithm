#include "sort.h"
#include <stddef.h>

/*
 * bubble_sort - sorts an array in ascending order with bubble sort.
 *
 * @array: array to be iterated through
 * @size: number of elements in @array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			for (k =0; k < j; k++)
			{
			if (array[k] > array[k + 1])
			{
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
			}
			}
		

		print_array(array, size);
		}
	}
}
