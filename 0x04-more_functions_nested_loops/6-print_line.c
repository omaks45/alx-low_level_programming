#include "main.h"
/**
* print_line - drawing a straight line
* @n: integer value
*/
void print_line(int n)
{
	int r;

	if (n <= 0)
		_putchar('\n');
	return;
	for (r = 0; r <= n; r++)
		_putchar('_');
	_putchar('\n')
}
