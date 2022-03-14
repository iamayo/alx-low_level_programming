#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabets
 * Return: Always 0 (success)
 */
int main(void)
{
char al;

for (al = 'a'; al <= 'z'; al++)
{
if (al != 'e' && al != 'q')
{
putchar(al);
}
}
putchar('\n');
return (0);
}
