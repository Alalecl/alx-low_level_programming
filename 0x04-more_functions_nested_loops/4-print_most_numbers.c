#include "main.h"

/**
 * main - print numbers from 0 to 9
 * do not print 2 and 4
 */

void print_most_numbers(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
