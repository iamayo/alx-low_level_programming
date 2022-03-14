#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all single digit number of base 10
 * Return: Always 0 (success)
*/

int main(void)
{
int d;
for (d = 0; d <= 9; d++)
{
printf("%d",d);
}
printf("\n");
return (0);
}
