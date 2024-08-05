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

	printf("pivot = %d\n", array[pivot]);
	curr = 0;
	if (len == 1)
		return;
	while (curr < len)
	{
		printf("array[curr] = %d\n", array[curr]);
		if (array[curr] >= array[len - 1])
		{
			next = curr;
			while (next < len)
			{
				printf("\tarray[next] = %d\n", array[next]);
				if (array[next] < array[len - 1])
				{
					printf("swapping curr %d with next %d\n", array[curr], array[next]);
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
					printf("swapping curr %d with next %d\n", array[curr], array[next]);
					hold = array[curr];
					array[curr] = array[next];
					array[next] = hold;

					pivot = len - 2;
					curr = pivot + 1;

					print_array(array, len);
					break;
				}
				++next;
			}
			printf("pivot = %d, curr = %d, next = %d\n", array[pivot], array[curr], array[next]);
		}
		++curr;
	}
	printf("TOP rec call\n");
	quick_sort(array, pivot + 1);

	printf("BOTTOM rec call\n");
	quick_sort(&array[pivot], len - pivot - 1);
}
