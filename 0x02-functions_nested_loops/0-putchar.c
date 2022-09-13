#include "main.h"

/**
 * main - entry point
 * Return - 0 on success
 */
int main(void)
{
	char strng[] = "_putchar";
	int i = 0;

	while (strng[i] != '\0')
	{
		_putchar(strng[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
