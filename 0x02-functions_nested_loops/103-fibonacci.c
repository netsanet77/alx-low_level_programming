#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
int i;
long int n1, n2, nxt, sum;
n1 = 1;
n2 = 2;
sum = 1;
while (n2 <= 4000000)
{
sum = sum + n2;
nxt = n1 + n2;
n1 = n2;
n2 = nxt;
}
printf("%ld", sum);
return (0);
}
