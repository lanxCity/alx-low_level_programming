#include "lists.h"

/**
 * print_list - function
 * @h: A pointer
 * Return: Returns the number of nodes
 */
 size_t print_list(const list_t *h)
{
	size_t n;
	list_t *nxt_add;
	
	nxt_add = h;

	for (n = 0; nxt_add != NULL; n++)
	{
		printf("[%d] %s", nxt_add->len, nxt_add->str);
		nxt_add = nxt_add->next;
	}

	return (n);
}
