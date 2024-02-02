#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - A function
 * @head: param1
 * @str: param2
 * Return: Address of a node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t i;
	/**/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return NULL;
	
	new_node->str = strdup(str);
	
	if (new_node->str == NULL)
	{
		free(new_node);
		return NULL;
	}
	/**/
	for (i = 0; str[i] != '\0'; i++)
		continue;
	/**/
	new_node->len = i;
	new_node->next = *head;
	
	*head = new_node;
	return new_node;
}
