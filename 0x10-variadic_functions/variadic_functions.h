#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printType - structure for type of parameter
 * @type: type of the argument
 * @p: pointer to function
 *
 */
typedef struct printType
{
	char *type;
	void (*p)(va_list);
} print_t;

void print_char(va_list);
void print_integer(va_list);
void print_float(va_list);
void print_string(va_list);
#endif
