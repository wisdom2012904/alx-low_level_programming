#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including \0.
 *@src: pointer.
 *@dest: pointer.
 *Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
int length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	while (i <= length)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
