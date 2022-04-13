#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - a function that prints a name of a person
 * @name: name to print
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
