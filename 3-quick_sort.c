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
	size_t pivot = len - 1, part = 0 , curr = 0 , next = 0 ;
	int hold;

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
					part++;
					printf("part(%d)\n", array[part]);
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
				part++;
				print_array(array, len);
				printf("part(%d)\n", array[part]);
			}
		}
		if (curr == pivot)
		{
			pivot = pivot - 1;
			curr = 0;
			printf("pivot(%d), part(%d)\n", array[pivot], array[part]);
		}
		++curr;
	}
}
