#include "main.h"
/**
 * _isdigit - check whether the character is digit or not
 *@c: character to be check
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
if (c <= 57 && c >= 48)
{
return (1);
}
else
{
return (0);
}
}
