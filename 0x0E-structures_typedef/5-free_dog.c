#include <stdlib.h>
#include "dog.h"
/**
* free_dog - frees memory allocate to struct dog
* @d: struct dog to free
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(->owner);
		free(d);
	}
}
