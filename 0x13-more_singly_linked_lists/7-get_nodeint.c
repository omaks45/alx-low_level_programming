#include <stddef.h>
#include "lists.h"
/**
* get_nodeint_at_index - finds the nth node of a linked list
* @head: pointer to the head
* @index: index of the node to find
* Return: the nth node of a listint_t linked list.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index; j++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
