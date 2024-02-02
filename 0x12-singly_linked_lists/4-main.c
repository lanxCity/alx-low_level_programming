#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;
	/**/
	head = NULL;
	add_node_end(&head, "Alexandro");
	add_node_end(&head, "Asaia");
	add_node_end(&head, "Augustin");
	add_node_end(&head, "Bennett");
	add_node_end(&head, "Bilal");
	add_node_end(&head, "Chandler");
	add_node_end(&head, "Damian");
	add_node_end(&head, "Daniel");
	print_list(head);
	return (0);
}
