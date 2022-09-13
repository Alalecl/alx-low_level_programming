#include "main.h"
/**
 * checks for lower case character
 * ascii character to be tested
 * Return: 1 if true else return 0
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
}
