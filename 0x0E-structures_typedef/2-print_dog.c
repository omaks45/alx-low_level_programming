#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* print_dog - print a structdog
* @d: pointer to the structure
* Return: void
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->Name != NULL)
			printf("Name:%s", d->Name);
		else
			printf("Name: (nil)", d->Name);
		printf("Age: %.6f", d->Age);
		if (d->Owner != NULL)
			printf("\nOwner:%s", d->Owner);
		else
			printf("Owner: (nil)\n");
	}
}
