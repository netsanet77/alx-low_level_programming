#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: size of times table
 * Return: void
 */
void print_times_table(int n)
{
int i, j, result;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;
if (j == 0)
{
_putchar(result + '0');
}
else
{
if (result < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(result + '0');
}
else if (result < 100 && result >= 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((result / 100) + '0');
_putchar(((result % 100) / 10) + '0');
_putchar(((result % 100) % 10) + '0');
}}}
_putchar('\n');
}}}
