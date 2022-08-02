#include "dog.h"
/**
* init_dog - initializes the structure dog
* @d: a pointer to the structure
* @name: a pointer to dog name
* @age: dog age
* @owner: pointer to the dog owner
*
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
