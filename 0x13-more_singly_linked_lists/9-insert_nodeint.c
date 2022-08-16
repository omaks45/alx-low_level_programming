#include <stddef.h>
#include "lists.h"
/**
* insert_nodeint_at_index - insert node at given position
* @head: pointer to the linked lists
* @idx: index to which the new node is inserted
* @n: value to the new address
*
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;

	unsigned int x;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}
	for (x = 0; x < (idx - 1) x++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
