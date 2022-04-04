#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - prints min no. of coins to make change for an amount
 *@argc: arguments
 *@argv: array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int x, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = 0;
	/* convert string to int and calculate coins */
	x = atoi(argv[1]);
	coins += x / 25;
	x = x % 25;
	coins += x / 10;
	x = x % 10;
	coins += x / 5;
	x = x % 5;
	coins += x / 2;
	x = x % 2;
	coins += x / 1;
	printf("%d\n", coins);
	return (0);
}
