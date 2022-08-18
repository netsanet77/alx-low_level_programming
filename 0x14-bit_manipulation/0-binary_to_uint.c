#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * @Return: the converted number or 0 when b is NULL or elements
 * of b is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, p, binary = 0, str_len;
	int power, x;

	if (b == NULL)
		return (0);
	str_len = strlen(b);
	power = str_len - 1;
	for (i = 0; i < str_len; i++)
	{
		if (b[i] == '1')
		{
			x = power;
			p = 1;
			while (x > 0)
			{
				p = p * 2;
				x--;
			}
			binary = binary + p;
		}
		else if (b[i] == '0')
			binary = binary;
		else
			return (0);

		power--;
	}

	return (binary);
}
