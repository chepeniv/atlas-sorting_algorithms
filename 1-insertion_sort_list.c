#include "sort.h"

/**
 * insertion_sort_list -
 * @list: pointer holding the location of the first node in a list
 *
 * Return: void
 */
void insertion_sort_list(listint_t **first)
{
	listint_t **end, **pos, **current; /*malloc these*/

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
			*pos = (*pos)->prev;
			if (*pos== NULL)
				break;
		}

		if (*pos != *end)
		{
			if ((*current)->next != NULL)
				(*current)->next->prev = (*current)->prev;
			(*current)->prev->next = (*current)->next;

			if (*pos != NULL)
			{
				(*current)->prev = *pos;
				(*current)->next = (*pos)->next;
				(*pos)->next = *current;
				(*current)->next->prev = *current;
			}
			else
			{
				(*current)->next = *first;
				(*current)->prev = NULL;
				(*first)->prev = *current;
				*first = *current;
			}
			print_list(*first);
		}

		if ((*end)->next != NULL && (*end)->n <= (*end)->next->n)
			*end = (*end)->next;
	}

	free(end);
	free(pos);
	free(current);
}
