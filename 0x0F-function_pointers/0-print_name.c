#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function that prints a name
 * @name: the given name
 * @f: pointer to point the function
 * Return: nothing
 *
 */
void print_name(char *name, void(*f)(char *))
{
if (name != NULL && f != NULL)
	f(name);
}
