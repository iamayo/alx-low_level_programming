#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - creates an array of integers.
 *@min: starting of range.
 *@max: end of range.
 *Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *p;
	int x, y;

	if (min > max)
		return (NULL);

	y = max - min + 1;

	p = malloc(sizeof(int) * y);

	if (p == NULL)
		return (NULL);

	for (x = 0; x < y; x++)
		*(p + x) = min++;

	return (p);
}
