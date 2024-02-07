#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - A function
 * @head: param1
 * Return: int
 */
int sum_listint(listint_t *head)
{
	listint_t *new_node;
	int sum;
	/**/
	if (head == NULL)
		return (0);
	/**/
	new_node = head;
	for (sum = 0; new_node->next != NULL; sum += new_node->n)
	{

		new_node = new_node->next;
	}

	/*sum += new_node->n;*/

	return (sum);
}
