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
