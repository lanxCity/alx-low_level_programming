#include "lists.h"

/**
 * free_listint2 - A function
 * @head: param1
 */
void free_listint2(listint_t **head)
{

	listint_t *temp;
	/**/
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;

		/**
		 * if (temp->n != 0)
		 * free(temp->n);
		 */

		free(*head);

		*head = temp;
	}
}
