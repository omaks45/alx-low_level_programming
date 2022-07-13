#include "main.h"
#include <stdio.h>
/**
* print_array - prints the elements of array of integers
* @a: first parameter
* @n: second element
*/
void print_array(int *a, int n)
{
	int *ptr = a, i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", ptr[i]);
	}
	else if (i > 0)
	{
		printf(", ");
		printf("%d", ptr[i]);
	}
	printf("%c", '\n');
}
