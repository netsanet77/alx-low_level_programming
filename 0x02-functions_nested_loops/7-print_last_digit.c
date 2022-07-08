#include "main.h"
/**
 * print_last_digit - print the last digit of the number
 *@c: the given number
 *
 * Return: int
 */
int print_last_digit(int c)
{
if( c > 0)
{
_putchar(c % 10 + '0');
}
else 
{
_putchar('-');
_putchar(c % 10 + '0');
}
return (c % 10);
}
