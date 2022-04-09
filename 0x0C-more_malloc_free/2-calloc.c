#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_calloc - allocates memory for an array, using malloc.
 *@nmemb: number of elements.
 *@size: number of bytes.
 *Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int x = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (x = 0; x < nmemb * size; x++)
		*(p + x) = 0;

	return (p);
}
