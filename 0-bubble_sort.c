#include "sort.h"
/**
 * bubble_sort - an array of integers is sorted in an ascending order.
 * @array: the array of integers to be sorted.
 * @size: the array's size.
 *
 * Description: Prints the array after each swap of two elements.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - j - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
