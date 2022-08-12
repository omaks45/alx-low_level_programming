#include "lists.h"
/**
* free_list - frees a list
* @head: head of the linked list.
* Return: no return.
*/
void free_list(list_t *head)
{
	list_t *new_node;

	while ((new_node = head) != NULL)
	{
		head = head->next;
		free(new_node->str);
		free(new_node);
	}
}

