#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* print_list - prints all the elements of list
* @h: singly linked list
* Return: number of elements in the list.
*/
size_t print_list(const list_t *h)
{
	size_t total = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n 0, (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		total++;
	}
	return (total);
}
