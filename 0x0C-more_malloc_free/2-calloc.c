#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* _calloc - allocate memory for an array using malloc
* @nmemb: array to be a memory to
* @size: size of the array
* Return:NULL if failed
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmem * size))
		ptr[i] = 0;
	return (ptr);
}
