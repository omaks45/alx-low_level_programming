#include "function_pointers.h"
/**
* array_iterator - execute a function in a given array
* @size: size of the array
* @array: pointer to the array
* @action: is a pointer to the function array
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && size != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
