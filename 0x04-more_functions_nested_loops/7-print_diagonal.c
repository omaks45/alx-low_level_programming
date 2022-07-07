#include "main.h"
/**
* print_diagonal - print a diagonal line
*/
void print_diagonal(int n)
{
	int x, j;

	for (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (j = 0; j < x; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
