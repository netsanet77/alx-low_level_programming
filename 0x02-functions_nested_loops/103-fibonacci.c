#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
int n1, n2, nxt, sum;
n1 = 1;
n2 = 2;
sum = 0;
while (n2 <= 4000000)
{
if (n2 % 2 == 0)
{
sum = sum + n2;
}
nxt = n1 + n2;
n1 = n2;
n2 = nxt;
}
printf("%d", sum);
return (0);
}
