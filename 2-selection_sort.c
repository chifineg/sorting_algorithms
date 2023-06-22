#include "sort.h"

/**
 * swap_ints - Function to swap two integers in an array.
 * @a: first int to swap.
 * @b: second int to swap.
 */
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Sort array of int in ascending order
 *                  using the selection sort algorithm.
 * @array: Array of integers to sort.
 * @size: Size of the array.
 *
 * Description: Prints array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t x, y;

	if (array == NULL || size < 2)
		return;

	for (x = 0; x < size - 1; x++)
	{
		min = array + x;
		for (y = x + 1; y < size; y++)
			min = (array[y] < *min) ? (array + y) : min;

		if ((array + x) != min)
		{
			swap_ints(array + x, min);
			print_array(array, size);
		}
	}
}
