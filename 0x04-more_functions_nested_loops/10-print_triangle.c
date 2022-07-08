#include "main.h"
/**
 * print_triangle - print triangle
 *@size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
int i, k, j;
for (i = 0; i < size; i++)
{
for (k = i; k < size - 1; k++)
{
_putchar(' ');
}
for (j = 0; j < i + 1; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
