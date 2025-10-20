#include "sort.h"

int main(void)
{
    listint_t *list;
    int array[] = {79, 47, 68, 87, 84, 91, 21, 32, 34, 2, 95, 31, 20, 22, 98, 39, 92, 41, 62, 1};
    size_t n = sizeof(array) / sizeof(array[0]);

    list = create_list(array, n);
    if (!list)
        return (1);
    print_list(list);
    printf("\n");

    insertion_sort_list(&list);

    return (0);
}
