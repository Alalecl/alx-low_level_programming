#include "main.h"
/**
 * return 1 if character is alphabet either upper case or lower case
 * Return 1 if true
 */

int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') || (c>= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
