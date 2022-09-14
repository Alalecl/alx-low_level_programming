#include <stdio.h>
/**
 * main - entry
 *
 * return : 0
 */

int main(void)
{
	int num_1 = 1, num_2 = 2, next = 0, sum = num_2;
	while (nxt <= 4000000)
	{
		next = num_1 + num_2;
		num_1 = num_2;
		num_2 = next;

		if (next % 2 == 0)
			sum += next;
	}
	printf("%\n", sum);

	return (0);
}
