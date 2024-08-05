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
	while (curr < len)
	{
		printf("array[curr] = %d\n", array[curr]);
		getchar();
		if (array[curr] >= array[len - 1])
		{
			next = curr;
			while (next < len)
			{
				printf("\tarray[next] = %d\n", array[next]);
				getchar();
				if (array[next] < array[len - 1])
				{
					printf("\tinner-most if\n");
					getchar();
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
					printf("\tinner-most else-if\n");
					hold = array[curr];
					array[curr] = array[len - 1];
					array[len - 1] = hold;

					pivot = len - 1;
					curr = pivot;

					print_array(array, len);
					break;
				}
				++next;
			}
			printf("pivot = %d, curr = %d, next = %d\n", array[pivot], array[curr], array[next]);
		}
		++curr;
	}
	printf("pivot = %d\n", array[pivot]);
	printf("TOP rec call\n");
	getchar();
	quick_sort(array, pivot + 1);

	printf("BOTTOM rec call\n");
	getchar();
	quick_sort(&array[pivot], len - pivot + 1);
}
