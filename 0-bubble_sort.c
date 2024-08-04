#include "sort.h"

void bubble_sort(int *array, size_t n)
{
	size_t order = 0, i = 0;
	int current, next;

	while (order != n - 1)
	{
		/*
		 * it helps to think about a special case
		 * in order to come up with an algorithm
		 */
		order = 0;
		for (i = 0; i + 1 < n; i++)
		{
			if (array[i] > array[i + 1])
			{
				current = array[i];
				next = array[i + 1];
				array[i] = next;
				array[i + 1] = current;

				print_array(array, n);
			}
			else
				order++;
		}
	}
}
