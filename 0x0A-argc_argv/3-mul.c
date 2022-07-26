#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point\
 * @argc: the size of the array
 * @argv: given array
 * Return: 1 and 0
 */
int main(int argc, char *argv[])
{
int i, result;
result = 1;
if (argc == 3)
{
for (i = 1; i < argc; i++)
{
result = result * atoi(argv[i]);
}
printf("%d\n", result);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
