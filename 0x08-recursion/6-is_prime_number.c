#include "main.h"
int is_not_odd_composit(int a, int b);
/**
 * is_not_odd_composit - the function that takes odd number and check
 * whether the number is composit or prime and return 1 for prime one
 * @a: other integer
 * @b: given integers
 * Return: integers
 */
int is_not_odd_composit(int a, int b)
{
if (b != 3 && b % a == 0)
{
	return (0);
}
else if (b / 2 > a)
{
return (is_not_odd_composit((a + 2), b));
}
else
{
	return (1);
}
}

/**
 * is_prime_number - function that returns 1 if the given number is prime
 * @n: the given number
 * Return: integer
 */

int is_prime_number(int n)
{
if (((n % 2 == 0) && (n != 2)) || n < 2)
{
	return (0);
}
else
{
	return (is_not_odd_composit(3, n));
}
}


