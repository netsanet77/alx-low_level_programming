#include "3-calc.h"
#include <stdio.h>
/**
 * main - print the calculation
 * @argc: the number of arguments
 * @argv: given array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	c = argv[2];
	b = atoi(argv[3]);
	if (get_op_func(c) == NULL || c[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", (*get_op_func(c))(a, b));

	return (0);
}
