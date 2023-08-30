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
 * selection_sort - an array of integers is sorted in ascending order
 * @array: An array of integers.
 * @size: the array's size.
 * Description: the array to be printed after each swap.
 */
void selection_sort(int *array, size_t size)
{
	size_t minimum, x, y;

	if (array == NULL || size < 2)
		return;
	for (x = 0; x < size - 1; x++)
	{
		minimum = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[minimum])
			{
				minimum = y;
			}
		}
		if (minimum != x)
		{
			swap_ints(&array[x], &array[minimum]);
			print_array(array, size);
		}
	}
}
