#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - check for malloc
* @b: parameter b
* Return: ptr to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
