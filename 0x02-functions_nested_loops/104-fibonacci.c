#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
int i;
double n1, n2, nxt;
n1 = 1;
n2 = 2;
printf("%ld, ", n1);
for (i = 1; i < 98; i++)
{
if (i != 97)
{
printf("%ld, ", n2);
}
else
{
printf("%ld\n", n2);
}
nxt = n1 + n2;
n1 = n2;
n2 = nxt;
}
return (0);
}
