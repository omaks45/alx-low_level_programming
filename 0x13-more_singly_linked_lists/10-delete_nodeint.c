#include <stddef.h>
#include "lists.h"
/**
* delete_nodeint_at_index - deletes node at certain index
* @head: pointer to the linked list
* @index: index of node to be deleted
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *new = *head;

	unsigned int i;

	if (new == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (new->next == NULL)
			return (-1);
		new = new->next;
	}
	temp = new->next;
	new->next = temp->next;
	free(temp);
	return (1);
}
