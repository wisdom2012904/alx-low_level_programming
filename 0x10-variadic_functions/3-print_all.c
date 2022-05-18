#include "variadic_functions.h"

/**
 * print_all - function, which prints anything
 * @format: data type format
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *ptr, *esptr = "";

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", esptr, va_arg(args, int));
					break;
				case 'i':
					printf("%s%i", esptr, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", esptr, va_arg(args, double));
					break;
				case 's':
					ptr = va_arg(args, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s", esptr, ptr);
					break;
				default:
					i++;
					continue;
			}
			esptr = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
