#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - selects the correct function
 * @s: operator
 * Return: pointer to the funcion
 *
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (*s != *(ops[i].op) && ops[i].op != NULL)
	i++;
return (ops[i].f);
}
