#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
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
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listp_t *ptr, *new_node, *temp;

	ptr = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = ptr;
		ptr = new_node;

		temp = ptr;

		while (temp->next != NULL)
		{
			temp = temp->next;
			if (head == temp->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptr);
				return (count);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}

	free_listp(&ptr);
	return (count);
}
