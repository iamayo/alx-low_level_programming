#include <stdio.h>
#include <unistd.h>
/**
 *main - entry point
 *Description: Prints the alphabet in lowercase
 *Return: Always 0 on success
 */

int main(void)
{
int al;
for (al = 'a'; al <= 'z'; al++)
{
putchar(al);
}
putchar('\n');
return (0);
}
