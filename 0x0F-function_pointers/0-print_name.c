#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - a function that prints a name
* @name: name asked to be printed
* @f: function that points to a name
*
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL && name == NULL)
		return ;
		f(name);
}
