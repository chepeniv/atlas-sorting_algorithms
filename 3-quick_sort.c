#include "sort.h"

void qs_motor(int *array, int len, int bot, int piv);
void swap_values(int *array, int first, int second);

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
	print_array(array, len);
}

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

void swap_values(int *array, int first, int second)
{
	int hold;

	hold = array[first];
	array[first] = array[second];
	array[second] = hold;
}
