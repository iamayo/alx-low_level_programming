#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string
 *@s1: string 1.
 *@s2: string 2.
 *@n: bytes in s2 to concatenate
 *Return: pointer to the newly concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int x = 0, y = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + x))
		len1++, x++;
	while (*(s2 + y))
		len2++, y++;
	len2++;
	if (n >= len2)
		n = len2;
	p = malloc(sizeof(char) * (len1 + n + 1));
	if (p == NULL)
		return (NULL);
	for (x = 0; x < len1; x++)
	{
		*(p + x) = *(s1 + x);
	}
	for (y = 0; y < n; x++, y++)
	{
		*(p + x) = *(s2 + y);
	}
	*(p + x) = '\0';
	return (p);
}
