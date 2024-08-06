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
	size_t pivot = len - 1, curr = 0 , next = 0 ;
	int hold;

	if (len < 2)
		return;
	while (curr <= pivot)
	{
		if (array[curr] > array[pivot])
		{
			next = curr;
			while (next < pivot)
			{
				if (array[next] <= array[pivot])
				{
					hold = array[curr];
					array[curr] = array[next];
					array[next] = hold;
					print_array(array, len);
					break;
				}
				++next;
			}
			if (array[curr] > array[pivot])
			{
				hold = array[pivot];
				array[pivot] = array[curr];
				array[curr] = hold;
				print_array(array, len);
			}
		}
		if (curr == pivot)
		{
			pivot = pivot - 1;
			curr = 0;
			continue;
		}
		++curr;
	}
}
