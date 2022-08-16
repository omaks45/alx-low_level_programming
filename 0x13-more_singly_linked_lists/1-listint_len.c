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
	size_t x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
