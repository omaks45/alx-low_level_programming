#include <stdio.h>
/**
 * main -main block
 * Description: prints all single digit numbers of base 10 starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		printf("%d\n", c);
	}
	return (0);
}
