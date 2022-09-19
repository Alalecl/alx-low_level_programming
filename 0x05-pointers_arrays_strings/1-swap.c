#include "main.h"
/**
 * main - swap two integers
 *
 *return - void
 */

void swap_int(int *a, int *b)
{
int swp = *a;
*a = *b;
*b = swp;
}
