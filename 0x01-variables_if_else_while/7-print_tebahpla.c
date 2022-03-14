#include <stdio.h>
#include <unistd.h>
/**
 *main - entry point
 *Description: Prints the alphabet in reverse
 *Return: Always 0 on success
 */
int main(void)
{
char al;
for (al = 'z'; al >= 'a'; al--)
{
putchar(al);
}
putchar('\n');
return (0);
}
