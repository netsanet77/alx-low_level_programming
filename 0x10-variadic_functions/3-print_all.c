#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - print the character
 * @ap: arguments of print_all function
 * Return: nothing
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_integer - print the integer
 * @ap: arguments of print_all function
 * Return: nothing
 */
void print_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - print the floating number
 * @ap: arguments of print_all function
 * Return: nothing
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - print the string
 * @ap: arguments of print_all function
 * Return: nothing
 */
void print_string(va_list ap)
{
	char *c;

	c = va_arg(ap, char *);

	 (c != NULL) ? printf("%s", c) : printf("(nil)");
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
int k = 0, j;
va_list ap;

print_t print[] = {
	{"c", print_char},
	{"i", print_integer},
	{"f", print_float},
	{"s", print_string},
	{NULL, NULL}
};

va_start(ap, format);
while (format && format[k])
{
	j = 0;
	while (j < 4)
	{
		if (*print[j].type == format[k])
		{
			print[j].p(ap);
			if (format[k + 1])
				printf(", ");
			break;
		}
		j++;
	}
	k++;
}
printf("\n");
va_end(ap);
}
