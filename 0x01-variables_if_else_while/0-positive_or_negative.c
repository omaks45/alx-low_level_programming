#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Get a random number and check if it is a positive, negative or zero
 * Return: Always 0 (Success)
 */
int main(void)
{
	int;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	if (n == 0)
	{	
	printf("%d is zero\n", n);
	}
	`return (0);
}

