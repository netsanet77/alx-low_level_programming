#include "main.h"
/**
 * _islower - checks whether the letter is lowercase or not
 *@c: the letter to be check
 *
 * Return: int
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
