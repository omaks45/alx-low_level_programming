#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
* free_listint2 - frees linked list
* @head: pointer to the list
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}
