#include "main.h"
/**
* print_square - print a square
* @size: integer value
*/
void print_square(int size)
{
	int t, h;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (t = 0; t < size; t++)
		{
			for (h = 0; h < size; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
