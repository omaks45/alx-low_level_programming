#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* add_nodeint - adds a new node to the beginning of linked list
* @head: head of a linked list
* @n: integer used as content
* Return: address of a new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		newnode->next = *head;
	*head = newnode;
	return (newnode);
}
