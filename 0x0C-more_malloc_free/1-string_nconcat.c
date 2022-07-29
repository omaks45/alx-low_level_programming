#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* length_string - finds string length
* @s: string whose length is calculated
* Return: string length
*/
int length_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
* string_nconcat - concatenate two strings
* @s1: string one
* @s2: string two
* @n: number of bytes to be added to s1
* Return: NULL if failed
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	s1_len = length_string(s1);

	if (s2 == NULL)
		s2 = "";
	s2_len = length_string(s2);

	if  (n >= s2)
		n = s2;

	ptr = malloc((s1_len + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for  (i = 0; i < s1_len; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[s1_len + j] = '\0';
	return (ptr);

}
