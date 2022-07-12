#include "main.h"
/**
* rev_string - reverse string
* @s: parameter s
*/
void rev_string(char *s)
{
	char tmp;
	int i, lng1, lng2;

	lng1 = 0, lng2 = 0;
	while (s[lng1] != 0 '\0')
		lng1++;
	lng2 = lng1 - 1;
	for (i = 0; i < lng1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[lng2];
		s[lng2] = tmp;
		lng2 -= 1;
	}
}
