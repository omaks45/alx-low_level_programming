#include <stdio.h>
/**
 * main - main block
 * Description: prints the alphabets with the exception of e and q
 * Return: 0
 */
int main(void)
{
	char t = 'a';

	while (t <= 'z')
	{
		if (t != 'e' && t != 'q')
		{
			putchar(t);
		}
	t++; 	
	}
	putchar('\n');
	return (0);
}
