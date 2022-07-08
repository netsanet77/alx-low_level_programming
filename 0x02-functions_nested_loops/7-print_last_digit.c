#include "main.h"
/**
 * print_last_digit - print the last digit of the number
 *@c: the given number
 *
 * Return: int
 */
int print_last_digit(int c)
{
int n = c % 10;
if (n < 0)
{
n = -n;
}
else
{
n = n;
}
_putchar(n + '0');
return (n);
}
