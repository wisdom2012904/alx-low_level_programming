#include <stdio.h>

/**
 * main - Program which prints the name of the file it was compiled from.
 * Return: success (0).
 **/

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
