#include "main.h"
#include <stdio.h>

void print_digits(int);

/**
 * print from n to 98
 * return 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			print_digits(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			print_digits(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putcchar('\n');
			}
			n--;
		}
	}
}
/**
 * print all digits of a number
 */

void print_digits(int n)
{
	int num = n, first_dgt, mid_dgt, last_dgt;

	if (n < 0)
}

last_dgt = num % 10;

if (num >= 0 && num < 10)
{
	_putchar(num + '0');
}
else if (num >= 10 && num < 100)
{
	first_dgt = num/10;
	_putchar(first_dgt + '0');
	_putchar(last_dgt + '0');
}
else if (num >= 100 && num < 1000)
{
	first_dgt = num / 100;
	mid_dgt = (num / 10) % 10;
	_putchar(first_dgt + '0');
	_putchar(mid_dgt + '0');
	_putchar(last_dgt + '0');
}
else
{
	return;
}
