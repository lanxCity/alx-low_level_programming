#include "lists.h"

/**
 * print_list - function
 * @h: A pointer
 * Return: Returns the number of nodes
 */
 size_t list_len(const list_t *h)
{
	size_t n;
	list_t *nxt_add;
	
	nxt_add = (list_t *)h;

	for (n = 0; nxt_add != NULL; n++)
	{
		nxt_add = nxt_add->next;
	}

	return (n);
}
