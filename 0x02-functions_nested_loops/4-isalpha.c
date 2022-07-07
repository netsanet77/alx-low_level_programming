#include "main.h"
/**
 *_isalpha - checks whether the the character is letter or not
 *@c: the character to be check
 *
 * Return: int
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
