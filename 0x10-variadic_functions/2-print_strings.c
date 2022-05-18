#include "variadic_functions.h"

/**
 * print_strings - print strings' function followed by new line
 * @separator: separator string
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	register unsigned int i = 0;
	char *ptr;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		ptr = va_arg(args, char *);
		if (!ptr)
			ptr = "(nil)";
		if (!separator)
			printf("%s", ptr);
		else if (separator && !i)
			printf("%s", ptr);
		else
			printf("%s%s", separator, ptr);
		i++;
	}
	printf("\n");
	va_end(args);

}
