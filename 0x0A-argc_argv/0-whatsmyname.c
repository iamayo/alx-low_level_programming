#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program followed by \n
 * @argc: variable
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;
	
	for(x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
