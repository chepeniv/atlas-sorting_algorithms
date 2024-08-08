#include "sort.h"

/**
 * quick_sort - the most resource efficient of the sorting algorithms given
 * @array: array to sort
 * @len: size of array
 *
 * Return: void
 */
void quick_sort(int *array, size_t len)
{
	if (len < 2)
		return;
	qs_motor(array, len - 1, 0, len - 1);
}

/**
 * qs_motor - the engine that powers the quick_sort function
 * @array: array to sort
 * @len: the index-lenght of the current partition
 * @bot: the lower index from which to begin
 * @piv: the pivot point to reference
 *
 * Return: void
 */
void qs_motor(int *array, int len, int bot, int piv)
{
	int curr = bot, swap = bot;

	while (curr <= piv)
	{
		if (array[curr] > array[piv])
		{
			swap = curr;
			while (swap < piv)
			{
				if (array[swap] <= array[piv])
				{
					swap_values(array, curr, swap);
					print_array(array, len + 1);
					break;
				}
				++swap;
			}
			if (array[curr] > array[piv])
			{
				swap_values(array, curr, swap);
				print_array(array, len + 1);
			}
			if (swap == piv)
			{
				qs_motor(array, len, bot, curr - 1);
				qs_motor(array, len, curr + 1, piv);
			}
		}
		if (curr == piv)
			qs_motor(array, len, bot, curr - 1);
		++curr;
	}
}

/**
 * swap_values - swaps the values of to index points given
 * @array: array to modify
 * @first: first index
 * @second: second index
 *
 * Return: void
 */
void swap_values(int *array, int first, int second)
{
	int hold;

	hold = array[first];
	array[first] = array[second];
	array[second] = hold;
}
