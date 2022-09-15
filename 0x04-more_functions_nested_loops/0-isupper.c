#include "main.h"
#include <stdio.h>

/**
 * main - checks for uppercase characters
 * returns 1 if successful
 * return 0 if false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
