#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *str_copy;
	int x = 0, size = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + x))
		size++, x++;
	size++;

	str_copy = malloc(sizeof(char) * size);

	if (str_copy == NULL)
		return (NULL);
	x = 0;
	while (x < size)
	{
		*(str_copy + x) = *(str + x);
		x++;
	}
	return (str_copy);
}
