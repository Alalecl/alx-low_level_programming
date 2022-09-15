#include 'main.h'

/**
 * main - draw a straight line in the terminal
 * if n is 0 or less, the function should print \n
 */

void print_line(int n)
{
while (n-- > 0)
{
_putchar('_');
}
_putchar('\n');
}
