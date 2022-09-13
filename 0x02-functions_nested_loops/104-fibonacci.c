#include <stdio.h>
/*
 * main - entry
 * return 0
 */

int main(void)
{
	int num_1 = 1, num_2 = 2, i = 2, next;

	printf("%d, %d, ", num_1, num_2);

	while (i < 98)
	{
		next = num_1 + num_2;
		num_1 = num_2;
		num_2 = next;

		printf("%i", next);
		if (i != 98)
		{
			priintf(", ");
		}
		i++;
	}

	putchar('\n');

	return (0);
}
