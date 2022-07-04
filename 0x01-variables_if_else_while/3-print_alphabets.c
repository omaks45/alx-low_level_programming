#include <stdio.h>
/**
 * main - main block
 * Description: convert the alphabets to lowercase and then back to uppercase
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	char d = 'd';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
