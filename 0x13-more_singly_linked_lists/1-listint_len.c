#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
* listint_len -counts the number of nodes in linked list
* @h: head of the list
*
* Return: the number of elements
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *newnode = h;
	size_t x;

	while (h != NULL)
	{
		x += 1;
		newnode = newnode->next;
	}
	return (x);
}
