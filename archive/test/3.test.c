#include "sort.h"

int main(void)
{
	int array[] = {79, 47, 68, 87, 84, 91, 21, 32, 34, 2, 95, 31, 20, 22, 98, 39, 92, 41, 62, 1};
	/* int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; */
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	quick_sort(array, n);

	return (0);
}
