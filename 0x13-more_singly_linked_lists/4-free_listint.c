#include "lists.h"

/**
 * free_list - A function
 * @head: param1
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	/**/
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		/*free(temp->n);*/
		free(temp);
	}
}
