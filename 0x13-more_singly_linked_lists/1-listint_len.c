#include "lists.h"

/**
 * listint_len - function
 * @h: A pointer
 * Return: Returns the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n;
	listint_t *nxt_add;
	/**/
	nxt_add = (listint_t *)h;

	for (n = 0; nxt_add != NULL; n++)
	{
		nxt_add = nxt_add->next;
	}

	return (n);
}
