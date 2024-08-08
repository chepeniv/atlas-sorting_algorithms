#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * struct _list_node - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct _list_node
{
	const int n;
	struct _list_node *prev;
	struct _list_node *next;
} listnode;

listnode *create_list(const int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listnode *list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listnode **list);

#endif
