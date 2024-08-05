#include "sort.h"

/**
 * selection_sort - a more optimal sorting algorithm the previous
 * @array: array to sort
 * @len: size of array
 *
 * Return: void
 */
void selection_sort(int *array, size_t len)
{
	size_t i, least, top = 0;
	int hold;

	while (top < len)
	{
		i = top;
		least = top;
		while (i < len)
		{
			if (array[least] > array[i])
				least = i;
			i++;
		}

		if (array[top] > array[least])
		{
			hold = array[top];
			array[top] = array[least];
			array[least] = hold;
			print_array(array, len);
		}

		top++;
	}
}
