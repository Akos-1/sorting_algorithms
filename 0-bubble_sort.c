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
	size_t a, b;

	if (array == NULL || size < 2)
		return;
	for (a = 0; a < size - 1; a++)
	{
		swapped = 0;

		for (b = 0; b < size - i - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				swap_ints(&array[b], &array[b + 1]);

				swapped = 1;
			}
		}
		if (!swapped)
			break;
	}
}
