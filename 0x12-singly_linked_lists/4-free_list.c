#include "lists.h"

/**
 * free_list - A function
 * @head: param1
 */
void free_list(list_t *head)
{
	list_t *temp;
	/**/
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
