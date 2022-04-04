#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: variable
 * @argv: array
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
