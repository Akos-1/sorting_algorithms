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
 * shell_sort - an array of integers is sorted in ascending
 * order using the shell sort method
 * @array: An array of integers.
 * @size: the array's size
 */
void shell_sort(int *array, size_t size)
{
	size_t space, a, b;

	if (array == NULL || size < 2)
		return;

	for (space = 1; space < size / 3; space = space * 3 + 1)
		for (; space >= 1; space /= 3)
		{
			for (a = space; a < size; a++)
			{
				b = a;
				while (b >= space && array[b - space] > array[b])
				{
					swap_ints(array + b, array + (b - space));
					b -= space;
				}
			}
			print_array(array, size);
		}
}
