#include "variadic_functions.h"

/**
 * print_numbers - print numbers'function
 * @separator: separator string
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	register unsigned int i = 0;

	va_list args;

	va_start(args, n);
	while (i < n)
	{
	printf("%i%s", va_arg(args, int), (separator && i != n - 1) ? separator : "");
		i++;
	}
	va_end(args);
	printf("\n");


}
