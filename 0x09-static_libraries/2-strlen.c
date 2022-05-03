#include "main.h"

/**
 * _strlen - calculate string's length.
 *
 * @s: the string to calculate it's length.
 * Return: string's length.
 */

int _strlen(char *s)
{
	int i;
	int length_S = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length_S++;
	}
	return (length_S);
}
