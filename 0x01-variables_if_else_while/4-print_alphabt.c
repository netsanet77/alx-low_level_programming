#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *letter = "abcdfghijklmnoprstuvwxyz\n";
while (*letter)
putchar(*letter++);
return (0);
}
