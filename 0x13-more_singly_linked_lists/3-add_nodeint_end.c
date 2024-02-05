#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - A function
 * @head: param1
 * @str: param2
 * Return: Address of a node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;
	/**/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	/**/
	new_node->n = n;
	new_node->next = NULL;
	/**/
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		/**/
		current->next = new_node;
	}
	return (new_node);
}
