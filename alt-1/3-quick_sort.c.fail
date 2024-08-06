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
	size_t curr, next, pivot = len - 1;
	int hold;

	curr = 0;
	if (len == 1)
		return;
	while (curr < len)
	{
		if (array[curr] >= array[len - 1])
		{
			next = curr;
			while (next < len)
			{
				if (array[next] < array[len - 1])
				{
					if (next == len - 1)
						pivot = next;
					hold = array[next];
					array[next] = array[curr];
					array[curr] = hold;

					print_array(array, len);
					break;
				}
				else if (next == len - 1)
				{
					hold = array[curr];
					array[curr] = array[next];
					array[next] = hold;

					pivot = len - 2;

					print_array(array, len);
					break;
				}
				++next;
			}
		}
		++curr;
	}
	quick_sort(array, pivot + 1);
	quick_sort(&array[pivot], len - pivot - 1);
}
