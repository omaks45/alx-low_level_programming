#include <stdio.h>
#include <stdarg.h>
#include "variadic functions.h"
/**
* print_c - print a string
* @cake: string to be printed
*
* Return: void
*/
void print_c(va_list cake)
{
	char *str = va_arg(cake, char*);

	if (str == NULL)
		str = "(nil)";
	else
		printf("%s", str);
}

/**
* print_all - print anything
* @format: list of arguments to be passed
*
* Return: void
*/
void print_all(const char * const format, ...);
{
	va_list
}
