#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * find_listint_loop - finds the loop contained
 *                     in a linked list
 * @head : pointer to the head of the linked list
 * Return: pointer the node where the loop starts,
 *         or NULL - if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *loop1, *loop2;

if (head == NULL || head->next == NULL)
return (NULL);

loop1 = head->next;
loop2 = (head->next)->next;

while (loop2)
{
if (loop1 == loop2)
{
loop1 = head;

while (loop1 != loop2)
{
loop1 = loop1->next;
loop2 = loop2->next;
}

return (loop1);
}

loop1 = loop1->next;
loop2 = (loop2->next)->next;
}

return (NULL);
}
