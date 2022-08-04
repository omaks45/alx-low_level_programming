#include "function_pointers.h"
#include <stdlib.h>
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	 print_name("Bob", print_name_as_is);
	 print_name("Bob Dylan", print_name_uppercase);
	 printf("\n");
		return (0);
}
/**
* print_name - a function that prints a name
* @name: name asked to be printed
* @f: function that points to a name
*
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
