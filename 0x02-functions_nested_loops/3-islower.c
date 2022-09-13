#include "main.h"
/**
* Checks for lowercase character
* Return 1 for lowercase or else return 0
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

