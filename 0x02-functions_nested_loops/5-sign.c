#include "main.h"
/**
 * print the sign of number
 * return 1 if n is greater than zero if else return zero if n is equal to 0 else return -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
