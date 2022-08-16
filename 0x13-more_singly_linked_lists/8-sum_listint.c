#include <stddef.h>
#include "lists.h"
/**
* sum_listint - sum all the data in linked list
* @head: pointer to the linked list
* Return: the sum of all data in linked list
*/
int sum_listint(listint_t *head)
{
	size_t count;

	count = 0;

	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
