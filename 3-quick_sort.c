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
 * lomuto_partition - the elements is rearranged in an array
 * according to the Lomuto partition scheme
 * @array: The array of integers
 * @size: the array's size
 * @left: The start index of the subset to be rearranged
 * @right: The end index of the subset to be rearranged
 * Return: The final partition index
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int p, upper, lesser;

	p = array[right];
	for (upper = lesser = left; lesser < right; lesser++)
	{
		if (array[lesser] < p)
		{
			if (upper < lesser)
			{
				swap_ints(array + lesser, array + upper);
				print_array(array, size);
			}
			upper++;
		}
	}

	if (array[upper] > p)
	{
		swap_ints(array + upper, array + right);
		print_array(array, size);
	}
	return (upper);
}

/**
 * lomuto_sort - the quicksort algorithm is applied
 * @array: An array of integers
 * @size: the array's size
 * @left: The start index of the array to partitioned
 * @right: The end index of the array to partitioned
 * Description: Uses the Lomuto partition scheme
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = lomuto_partition(array, size, left, right);
		lomuto_sort(array, size, left, part - 1);
		lomuto_sort(array, size, part + 1, right);
	}
}

/**
 * quick_sort - an array of integers is sorted in ascending order
 * by the quicksort method
 * @array: An array of integers
 * @size: the array's size
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, size, 0, size - 1);
}
