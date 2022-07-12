#include "main.h"
#include <stdio.h>
/**
* swap_int - swap a function that swaps the values of two integers
* @a: value1
* @b: value2
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
