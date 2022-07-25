#include <stdio.h>
/**
 * main -  entry point
 * @argc: the size of the array
 * @argv: given array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
