#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: array of pointer to strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num 1, num 2, total;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num 1 = atoi(argv[1]);
	num 2 = atoi(argv[2]);
	total = num 1 * num 2;
	printf("%d\n", total);
	return (0);
