#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by new line
 * @separator: the string printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
va_start(ap, n);

if (separator != NULL)
{
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d%s ", va_arg(ap, int), separator);
		}
		else
			printf("%d\n", va_arg(ap, int));
	}
}
va_end(ap);
}
