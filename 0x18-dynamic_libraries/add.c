#include "main.h"
int add(int a, int b)
{

	return (a + b);
}


/**
*functions to check for subtractions
*/
int sub(int a, int b)
{

	return (a - b);
}


/**
*functions to check for multiplications
*/
int mul(int a, int b)
{

	return(a * b);
}


/**
*function to check for division
*/
int div(int a, int b)
{

	if (b != 0)
		return (a / b);
	return (0);
}


/**
*functions to check for module
*/
int mod(int a, int b)
{

	if (b != 0)
		return (a % b);
	return (0);
}
