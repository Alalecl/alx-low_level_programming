#include 'main.h'

/**
 * main - draw a straight line in the terminal
 * if n is 0 or less, the function should print \n
 */

void print_line(int n)
{
if (n >= 0)
{
int i = 0;
while (i < n)
{
_putchar('_');
i++;
}
}
_putchar('\n');
}
