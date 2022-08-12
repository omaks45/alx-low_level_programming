#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
* add_node - adds a new node to the beginning of list_s lists.
* @head: head of the linked list
* @str: string to store in the lists
* Return: address of the head
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t i = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	for (; str[i]; i++)
		;

	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
