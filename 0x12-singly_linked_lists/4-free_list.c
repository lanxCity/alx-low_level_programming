#include "lists.h"
/**
 * free_list - A function
 * @head: param1
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
