#include "main.h"

/**
* Print 10 times the alphabet in lowercase
* Return is always 0
*/

void print_alphabet_x10(void)
{
int i;
char alpha;

for (i = 0; i <= 9; i++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
}
