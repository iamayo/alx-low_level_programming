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
write(1, str, 64);
}
