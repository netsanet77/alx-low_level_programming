#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: the string printed between numbers
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *p;

va_start(ap, n);
if (separator != NULL)
{
	for (i = 0; i < n; i++)
	{
		p = va_arg(ap, char *);
		if (p == NULL)
			p = "(nil)";
		if (i != (n - 1))
			printf("%s%s", p, separator);
		else
			printf("%s\n", p);
	}
}
va_end(ap);
}
