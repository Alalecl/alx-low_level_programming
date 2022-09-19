#include "main.h"
/**
 * int _strlen returns the lenght of string
 *
 * return 0
 */
int _strlen(char *s)
{
int len = 0;

while (*s != 0)
{
len++;
*s++;
}
return (len);
}
