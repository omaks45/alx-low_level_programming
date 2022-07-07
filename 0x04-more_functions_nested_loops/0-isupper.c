#include "main.h"

/**
* _isupper - this is a function to show uppercase alphabets
* @c:integer parameter
* Return: 1 if c is uppercase and 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
