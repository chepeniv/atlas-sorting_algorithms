#include "sort.h"

/*
 * the value stored within a node cannot be changed
 * only the nodes themselves can be moved around
 */

/**
 * insertion_sort_list -
 * @list: pointer holding the location of the first node in a list
 *
 * Return: void
 */
void insertion_sort_list(listnode **first)
{
	listnode **end, **pos, **current; /*malloc these*/

	*end = *first;

	while ((*end)->next != NULL)
	{
		*pos = *end;
		*current = (*end)->next;
		while ((*pos)->n > (*current)->n)
		{
			if ((*pos)->prev != NULL)
				*pos = (*pos)->prev;
			else
				break;
		}
		if (*pos != *end)
			/* insert current before pos) */;
		if ((*end)->n < (*end)->next->n)
			*end = (*end)->next;
	}
}
