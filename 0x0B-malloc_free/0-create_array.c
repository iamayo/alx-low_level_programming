#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars, and initialize with specific char.
 * @size: size of array
 * @c: fill array values with this char
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
	{
		*(array + a) = c;
	}
	*(array + a) = '\0';
	return (array);
}

