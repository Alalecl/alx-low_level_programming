#include "main.h"

/**
* Print 10 times the alphabet in lowercase
* Return is always 0
*/

void print_alphabet_x10(void)
{
int i;
char letter;

for (i = 0; i <= 9; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
return (0);
}

