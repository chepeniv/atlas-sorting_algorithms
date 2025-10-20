#include "sort.h"

int main(void)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf("\n");
	bubble_sort(array, n);
	/*
	 * final line output :
	 * 7, 13, 19, 48, 52, 71, 73, 86, 96, 99
	 */

	return (0);
}
