#include "sort.h"

/**
 * insertion_sort_list - implements the classic insertion sort algorithm
 * upon a doubly linked list
 * @first: pointer holding the location of the first node in a list
 *
 * Return: void
 */
void insertion_sort_list(listint_t **first)
{
	listint_t **end, **pos, **current;

	end = malloc(sizeof(void *));
	pos = malloc(sizeof(void *));
	current = malloc(sizeof(void *));
	if (end == NULL || pos == NULL || current == NULL)
		return;

	*end = *first;
	while ((*end)->next != NULL)
	{
		*pos = *end;
		*current = (*pos)->next;

		while ((*pos)->n > (*current)->n)
		{
			swap_nodes(first, pos, current);
			print_list(*first);
			*pos = (*current)->prev;
			if (*pos == NULL)
				break;
		}

		if ((*end)->next != NULL && (*end)->n <= (*end)->next->n)
			*end = (*end)->next;
	}

	free(end);
	free(pos);
	free(current);
}


/**
 * swap_nodes - swaps two adjacent nodes
 * @first: the head of the list used to handle special cases
 * @a: the node to swap with the second
 * @b: the node to swap with the first
 *
 * Return: void
 */
void swap_nodes(listint_t **first, listint_t **a, listint_t **b)
{
	(*a)->next = (*b)->next;
	if ((*a)->next != NULL)
		(*a)->next->prev = *a;

	(*b)->prev = (*a)->prev;
	if ((*b)->prev != NULL)
		(*b)->prev->next = *b;
	else
		*first = *b;

	(*a)->prev = *b;
	(*b)->next = *a;
}
