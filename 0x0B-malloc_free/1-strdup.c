#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
		RETURN (NULL);

	for (x = 0; x < size; x++)
	{ 
		*(str_copy + x) = *(str + x);
	}
	return (str_copy);
}
