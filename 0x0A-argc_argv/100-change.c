#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for
 *an amount of money
 * @argc: the number of arguments
 * @argv: the given array
 * Return: 1 and 0
 *
 */
int main(int argc, char *argv[])
{
int num, noOfCents = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
num = atoi(argv[1]);
while (num > 0)
{
if (num >= 25)
{
noOfCents  = num / 25;
num = num % 25;
}
else if (num >= 10)
{
noOfCents += num / 10;
num = num % 10;
}
else if (num >= 5)
{
noOfCents += num / 5;
num = num % 5;
}
else if (num >= 2)
{
noOfCents += num / 2;
num = num % 2;
}
else
{
noOfCents += 1;
num--;
}
}
printf("%d\n", noOfCents);

return (0);
}
