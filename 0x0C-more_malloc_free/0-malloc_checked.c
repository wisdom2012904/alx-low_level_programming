#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - function allocate memory.
 *@b: size of the memory to be allocated.
 *Return: pointer, ptr;
 **/

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (ptr);
}
