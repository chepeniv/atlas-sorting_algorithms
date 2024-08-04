#include "sort.h"

/**
 * insertion_sort_list - a rudimentary sorting algorithm
 * @list: pointer holding the location of the first list item
 *
 * Return: void
 */
void insertion_sort_list(listnode **list)
{
	/*
	 * the value stored within a node cannot be changed
	 * only the nodes themselves can be moved around
	 */
	size_t order = 0, i = 0;
	int current, next;

	while (order != n - 1)
	{
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
