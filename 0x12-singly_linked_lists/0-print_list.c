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
	
	nxt_add = (list_t *)h;

	for (n = 0; nxt_add != NULL; n++)
	{
		if (nxt_add->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", nxt_add->len, nxt_add->str);
		nxt_add = nxt_add->next;
	}

	return (n);
}
