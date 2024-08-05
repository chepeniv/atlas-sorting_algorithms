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

	end = malloc(sizeof(void *));
	pos = malloc(sizeof(void *));
	current = malloc(sizeof(void *));
	if (end == NULL || pos == NULL || current == NULL)
		return;

	*end = *first;
	while ((*end)->next != NULL)
	{
		*pos = *end;
		*current = (*end)->next;

		while ((*pos)->n > (*current)->n)
		{
			if ((*pos)->prev == NULL)
				break;
			*pos = (*pos)->prev;
		}

		if (*pos != *end)
		{
			if ((*current)->next != NULL)
				(*current)->next->prev = (*current)->prev;
			(*current)->prev->next = (*current)->next;

			if ((*pos)->prev != NULL)
			{
				(*current)->prev = *pos;
				(*current)->next = (*pos)->next;
				(*pos)->next = *current;
				(*current)->next->prev = *current;
			}
			else
			{
				(*current)->next = *pos;
				(*current)->prev = NULL;
				(*pos)->prev = *current;
				*first = *current;
			}
			print_list(*first);
		}

		if ((*end)->next != NULL && (*end)->n < (*end)->next->n)
			*end = (*end)->next;
	}

	free(end);
	free(pos);
	free(current);
}
