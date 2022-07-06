#include "main.h"
/**
* print_alphabet_x10 - Print the alphabet ten times in lowercase and a new line
*/
void print_alphabet_x10(void)
{
	int times = 0;
	char lett;

        while (times++ <= 9)
	{
		for (lett = 97; lett <= 122; lett++)
		      _putchar(lett);	
	}
	_putchar('\n');
}
