#include "lists.h"

/**
 * free_listint - A function
 * @head: param1
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	/**/
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		/*free(temp->n);*/
		free(temp);
	}
}
