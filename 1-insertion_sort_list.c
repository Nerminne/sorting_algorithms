#include "sort.h"
/**
 * insertion_sort_list - sort doubly linked list using insertion algorithm
 * @list: pointer to linked list
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cmp_node, *last_cmp;

	if (list == NULL || *list == NULL)
		return;

	cmp_node = (*list)->next;
	while (cmp_node)
	{
		last_cmp = cmp_node->next;
		while (cmp_node->prev && cmp_node->prev->n > cmp_node->n)
		{
			cmp_node->prev->next = cmp_node->next;
			if (cmp_node->next != NULL)
				cmp_node->next->prev = cmp_node->prev;

			cmp_node->next = cmp_node->prev;
			cmp_node->prev = cmp_node->prev->prev;
			cmp_node->next->prev = cmp_node;

			if (cmp_node->prev != NULL)
				cmp_node->prev->next = cmp_node;
			else
				*list = cmp_node;
			print_list(*list);
		}
		cmp_node = last_cmp;
	}
}
