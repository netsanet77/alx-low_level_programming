#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
int i, n1, n2, nxt;
n1 = 1;
n2 = 2;
printf("%d, ", n1);
for (i = 1; i < 50; i++)
{
if (i != 49)
{
printf("%d, ", n2);
}
else
{
printf("%d\n", n2);
}
nxt = n1 + n2;
n1 = n2;
n2 = nxt;
}
return (0);
}
