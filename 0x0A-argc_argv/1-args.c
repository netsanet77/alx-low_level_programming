#include <stdio.h>
/**
 * main - prints the number of arguments passed to it
 * @argc: the number of arguments
 * @argv: unused parameter
 * Return: 0
 *
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
printf("%d\n", (argc - 1));
return (0);
}
