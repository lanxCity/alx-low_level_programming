#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - A function
 * @head: param1
 * @index: param2
 * Return: Address of a node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node_at_index;
	unsigned int i;
	/**/
	if (head == NULL)
		return (NULL);
	/**/
	node_at_index = head;
	/**/
	for (i = 1; i <= index; i++)
	{
		if (head->next == NULL)
			return (NULL);

		node_at_index = node_at_index->next;
	}

	return (node_at_index);
}
