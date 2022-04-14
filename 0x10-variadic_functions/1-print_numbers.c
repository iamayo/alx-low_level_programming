#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - a function that prints numbers
 *@separator: string between numbers
 *@n: number of arguments
 *Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (n > 0)
	{
		va_start(valist, n);

		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(valist, int));

			if (i != n && seperator != NULL)
				printf("%s", seperator);
		}

		va_end(valist);
	}
	printf("\n");
}
