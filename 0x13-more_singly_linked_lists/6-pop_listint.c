#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
* pop_listint - deletes head of a node
* @head: pointer to linked list
* Return: the head's nodes data
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	if (temp == NULL)
		return (0);
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
