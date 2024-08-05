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
	size_t curr, next, pivot = len;
	int hold;

	curr = 0;
	while (curr < len)
	{
		printf("entered outer while loop\n");
		getchar();
		if (array[curr] >= array[len])
		{
			next = curr;
			while (next < len)
			{
				printf("entered inner while loop\n");
				getchar();
				if (array[next] < array[len] || next == len)
				{
					printf("entered final if-statement\n");
					getchar();
					if (next == len)
						pivot = next;
					hold = array[next];
					array[next] = array[curr];
					array[curr] = hold;
					print_array(array, len);
					curr = next + 1;
					break;
				}
				++next;
			}
		}
		++curr;
	}
	printf("calling top rec call\n");
	getchar();
	quick_sort(array, pivot);
	printf("calling bottom rec call\n");
	getchar();
	quick_sort(&array[pivot], len - pivot);
}
