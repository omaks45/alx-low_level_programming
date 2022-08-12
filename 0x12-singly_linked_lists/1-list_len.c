#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* list_len - number of elements in list
* @h: singly linked list
* Return: number of element in string
*/
size_t list_len(const list_t *h)
{
	size_t num_of_elem;

	num_of_elem = 0;
	while (h != NULL)
	{
		h = h->next;
		num_of_elem++;
	}
	printf("\n");
	return (num_of_elem);
}
