#include "main.h"
/**
* Check for alphabetic characters
* Return 1 if c is a letter lower oruppercase or else return 0
*/

int _isalpha(int c)
{
if ((c ='a' && c <= 'z') || (c = 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
