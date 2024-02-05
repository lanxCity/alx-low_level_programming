#include "lists.h"

/**
 * print_listint - function
 * @h: A pointer
 * Return: Returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;
	listint_t *nxt_address;
	/**/
	nxt_address = (listint_t *)h;

	for (i = 0; nxt_address != NULL; i++)
	{
		printf("%d\n", nxt_address->n);

		nxt_address = nxt_address->next;
	}

	return (i);
}
