#include "sort.h"
#include <stddef.h>

/*
 * bubble_sort - sorts an array of integers
 * in ascending order using bubble sort.
 *
 * @array: array to be iterated through
 * @size: number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for(i= 0; i < size - 1; i++)
	{
		for(j = 0; j <size -1; j++)
		{
			if(array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
		print_array(array, size);
	}
}
