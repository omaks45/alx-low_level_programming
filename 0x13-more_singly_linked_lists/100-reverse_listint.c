#include <stddef.h>
#include "lists.h"
/**
* reverse_listint - reverses a listint_t linked list
* @head: pointer to linked list
* Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *current_node;

	ptr = NULL;
	current_node = NULL;
	while (*head != NULL)
	{
		current_node = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = current_node;
	}
	*head = ptr;
	return (*head);
}
