#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
int main(int argc, char *argv[])
{
	int a, b, d;
	char *c;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	c = argv[2];
	b = atoi(argv[3]);
	d = (*get_op_func(c))(a, b);
	if (get_op_func(c) == NULL || c[1] != '\0')
	{
		        printf("Error\n");
			        exit(99);
	}
	printf("%d\n", d);

	return (0);
}
