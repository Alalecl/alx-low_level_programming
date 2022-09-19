#include "main.h"
/**
 * main - print a string followed by a new line
 *
 * return - void
 */

void _puts(char *str)
{
while (*str != 0)
{
_putchar(*str);
}
_putchar('\n');
}
