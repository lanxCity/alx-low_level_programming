#include "lists.h"

/**
 * pop_listint - A function
 * @head: param1
 * Return: int
 */
int pop_listint(listint_t **head)
{

	listint_t *new_head;
	int pop_data;

	if (*head == NULL)
		return (0);

	new_head = (*head)->next;
	pop_data = (*head)->n;
	/**/
	free(*head);

	*head = new_head;

	if (head == NULL)
		return (0);
	return (pop_data);
}
