#include "lists.h"
#include <stddef.h>

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *ptr;

	if (head != NULL)
	{
		ptr = *head;
		while ((temp = ptr) != NULL)
		{
			ptr = ptr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t new_nodes = 0;
	listp_t *ptr, *temp, *add;
	listint_t *prev;

	ptr = NULL;
	while (*h != NULL)
	{
		temp = malloc(sizeof(listp_t));

		if (temp == NULL)
			exit(98);

		temp->p = (void *)*h;
		temp->next = ptr;
		ptr = temp;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&ptr);
				return (new_nodes);
			}
		}

		prev = *h;
		*h = (*h)->next;
		free(prev);
		new_nodes++;
	}

	*h = NULL;
	free_listp2(&ptr);
	return (new_nodes);
}
