#include <stdio.h>
#include "main.h"

/**
 *swap_int - swaps the values of two integers.
 *@n: pointer.
 *
 *Return: void.
 */

void swap_int(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
