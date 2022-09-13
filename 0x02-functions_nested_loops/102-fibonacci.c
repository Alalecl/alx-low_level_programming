#include <stdio.h>

/**
 * main - entry point
 *
 * return 0
 */

int main(void)
{
	long int num_1 = 1, num_2 = 2, i = 0, next;

	printf("%ld, %ld, ", num_1, num_2);

	while (i < 48)
	{
		next = num_1 + num_2;
		num_1 = num_2;
		num_2 = next;

		printf("%ld", next);
		if (i != 47)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');

	return (0);
}
