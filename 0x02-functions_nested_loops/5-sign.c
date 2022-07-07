nclude "main.h"
/**
 * print_sign - print the sign of the number
 *@n: the given number
 *
 * Return: int
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
