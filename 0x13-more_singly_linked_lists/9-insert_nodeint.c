#include "lists.h"

/**
 * pop_listint - A function
 * @head: param1
 * Return: int
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *curr_node, *new_node;
	unsigned int i;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		 new_node->next = *head;
		 *head = new_node;
		 return (new_node);
	}

	curr_node = *head;

	for (i = 1; i < idx && curr_node != NULL; i++)
	{

		curr_node = curr_node->next;
	}

	if (curr_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = curr_node->next;
	curr_node->next = new_node;

	return (new_node);
}









