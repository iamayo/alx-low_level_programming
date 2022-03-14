#include <stdio.h>
#include <unistd.h>
/**
 *main - entry point
 *Description: Prints all the numbers of base 16 in lowercase
 *Return: Always 0 on success
 */
int main(void)
{
char al;
for (al = '0'; al <= '9'; al++)
{
putchar(al);
}
for (al = 'a'; al <= 'f'; al++)
{
putchar(al);
}
putchar('\n');
return (0);
}
