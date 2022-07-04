#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int lastdigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;
printf("Last digit of %d is %d %s\n", n, lastdigit, lastdigit > 5 ?
"and is greater than 5" lastdigit < 6 && lastdigit != 0 ?
"and is less than 6 and not 0" : "and is 0");
return (0);
}
