#include "main.h"
/**
 * main - print a string followed by a new line
 *
 * return - void
 */

void _puts(char *str)
{
  
while (*str)
_putchar(*str++);

_putchar('\n');
}
