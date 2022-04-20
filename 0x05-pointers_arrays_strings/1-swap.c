#include "main.h"

/**
 * swap_int - swaps the value of two integers, a & b.
 *
 * @a: first integer.
 * @b: second integer.
 *
 */

void swap_int(int *a, int *b)
{
	int x;

	x = 0;
	x = *a;
	*a = *b;
	*b = x;
}
