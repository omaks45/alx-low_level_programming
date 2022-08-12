#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
* _strlen - function that returns len of strings
* @x: is a character
* Return: len of string
*/
int _strlen(const char *x)
{
	int i = 0, count = 0;

	for (; x[i] != '\0'; i++)
		count += x[i];
	return (count);
}

/**
* add_node - adds a new node to the beginning of list_s lists.
* @head: head of the linked list
* @str: string to store in the lists
* Return: address of the head
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);

	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
