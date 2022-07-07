#include "main.h"
/**
* more_numbers - print more numbers
*/
void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 10; a++)
		_putchar(a + '0');
	for (b = 0; b <= 15; b++)
		_putchar(b + '0');
	putchar('\n');
}
