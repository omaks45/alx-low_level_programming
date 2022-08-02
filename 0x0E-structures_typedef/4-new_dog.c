#include <stdlib.h>
#include "dog.h"
/**
* _strlen - returns the length of a string
* @s: string to be evaluated
*
* Return: the length of the string
*/
int _strlen(char *s)
{
	int = 0;
	while (s[i] != '\0')
	{
		i++
	}
	return (i);
}

/**
* *_strcpy - copies the string pointed to by orgn
* with terminating null byte
* @ptr: pointer to the buffer which we copy string
* @orgn: string to be copied
*
* Return the pointer to ptr
*/
char *_strcpy(char *ptr, char *orgn)
{
	int len, i;

	while (orgn[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		ptr[i] = orgn[i];
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer to the new dog (Success), NULL else
*
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->owner);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
