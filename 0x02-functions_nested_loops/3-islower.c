#include "main.h"

/**
 * _islower - Entry point
 * Description: A function that checks for lowercase character
 * @c: the integer value it receives
 * Return: 1 if TRUE 0 if FALSE
 */
int _islower(int c)
{
int i = 'a';

for (i = 'a'; i <= 'z'; i++)
{
/* refer int c*/
if (c == i)
{
return (1);
}
}
return (0);
}
