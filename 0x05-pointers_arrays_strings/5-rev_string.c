#include "main.h"

/**
 * rev_string - reverse a string.
 *
 *@s: the string to be reversed.
 */

void rev_string(char *s)
{
	int length, j, i;
	char a, b;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	for (i = 0, j = length - 1; j > i; j--, i++)
	{
		a = s[i];
		b = s[j];
		s[i] = b;
		s[j] = a;
	}
}
