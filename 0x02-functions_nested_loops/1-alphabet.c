#include "main.h"
/**
 * main - Check the code
 * Description: Write a function that prints all the alphabets in lower case
 * Return: Always 0
 */
void print_alphabets(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
