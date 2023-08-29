#include "sort.h"
/**
 * swap_ints - two integers are swapped in an array.
 * @m: The first integer to be swapped.
 * @n: The second integer to be swapped.
 */
void swap_ints(int *m, int *n)
{
	int tmp = *m;
	*m = *n;
	*n = tmp;
}

/**
 * bubble_sort - an array of integers is sorted in an ascending order
 * @array: the array of integers to be sorted.
 * @size: the array's size.
 *
 * Description: Prints the array after each swap of two elements.
 */
void bubble_sort(int *array, size_t size)
{
	int swapped;
        size_t i, j;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_ints(&array[j], &array[j + 1]);
				swapped = 1;
			}
		}
		if (!swapped)
			break;
	}
}
