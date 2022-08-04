#include "function_pointers.h"

/**
  * int_index - returns the index of the first element
  * @array: array whose index of its first element is to be compared
  * @size: size of the element of the array
  * @cmp: function to compare the element of the array
  *
  * Return: -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
