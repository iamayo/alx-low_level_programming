#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 *_puts - prints string followed by newline.
 *@str: pointer to string.
 *
 *Return: void.
 */
void _puts(char *str)
{
int c;
for (c = 0; str[c] != 0; c++)
{
putchar(str[c]);
}
{
putchar('\n');
}
}
