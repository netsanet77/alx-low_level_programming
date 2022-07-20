#include "main.h"
int square_root(int a, int b);
/**
 * square_root - return the square root of the number
 * @a: the given number
 * @b: an integer parameter
 * Return: integer
 */
int square_root(int a, int b)
{
if (b * b < a)
{
	return (square_root(a, b + 1));
}
else if (b * b > a)
{
	return (-1);
}
else
{
	return (b);
}
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the given integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
	return (-1);
}
else if (n == 0)
{
return (0);
}
else
{
return (square_root(n, 1));
}
}
