#include "lists.h"

/**
 * pop_listint2 - A function
 * @head: param1
 */
int pop_listint(listint_t **head)
{

	listint_t *new_head;
	int pop_data;
	/**
	* if (head == NULL)
	* return;
	*/

	new_head = (*head)->next;
	pop_data = (*head)->n;
	
	free(*head);

	*head = new_head;

	return (pop_data);
}
