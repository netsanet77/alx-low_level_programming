#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *lletter = "abcdefghijklmnopqrstuvwxyz";
char *uletter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
while (*lletter)
putchar(*lletter++);
while (*uletter)
putchar(*uletter++);
return (0);
}
