#include "sort.h"

/**
 * insertion_sort_list -
 * @list: pointer holding the location of the first node in a list
 *
 * Return: void
 */
void insertion_sort_list(listnode **first)
{
	listnode **end, **pos, **current; /*malloc these*/

	/*
	int length = 0;
	while ((*first)->next != NULL)
		length++;
	if (length < 3)
		return;
	*/

	end = malloc(sizeof(void *));
	pos = malloc(sizeof(void *));
	current = malloc(sizeof(void *));
	if (end == NULL || pos == NULL || current == NULL)
		return;

	printf("entered first whileloop\n");
	*end = *first;
	while ((*end)->next != NULL)
	{
		*pos = *end;
		*current = (*end)->next;
		while ((*pos)->n > (*current)->n)
		{
			*pos = (*pos)->prev;
			if (*pos == NULL)
				break;
		}

		if (*pos != *end)
		{
			if (*pos != NULL)
			{
				if ((*current)->next != NULL)
					(*current)->next->prev = (*current)->prev;
				(*current)->prev->next = (*current)->next;
				(*current)->prev = *pos;
				(*current)->next = (*pos)->next;
				(*pos)->next = *current;
				(*current)->next->prev = *current;
			}
			print_list(*first);
		}

		if ((*end)->n < (*end)->next->n)
			*end = (*end)->next;
	}

	free(end);
	free(pos);
	free(current);
}
