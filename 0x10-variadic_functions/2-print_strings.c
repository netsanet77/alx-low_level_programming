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
for (i = 0; i < n; i++)
{
	p = va_arg(ap, char *);
	if (p == NULL)
		p = "(nil)";
	printf("%s", p);
	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
}
printf("\n");
va_end(ap);
}
