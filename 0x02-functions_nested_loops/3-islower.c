#include "main.h"
/**
 * _islower - checks whether the letter is lowercase or not
 *
 * Return: int
 */
int _islower(int c)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
if (c == i)
{
return (1);
}
else
{
return (0);
}
}
}
