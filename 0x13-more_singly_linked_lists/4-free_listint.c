#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"
/**
* free_listint - frees a linked list
* @head: head of a list
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((head = temp) != NULL)
	head = head->next;
	free(temp->next);
	free(temp);
}
