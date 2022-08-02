#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	if (d->Name == NULL)
		printf("Name: (nil)\n");
	if (d->Owner == NULL)
		printf("Owner: (nil)\n");
	if (d->Age == NULL)
		printf("Age: (nil)\n");
}
