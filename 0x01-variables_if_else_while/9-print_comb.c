#include <stdio.h>
/**
 * main - prints 1 - 9 seprated by space
 * Return: 0 if successful
 */

int main(void)
{
int i = '0';

while (i <= '9')
{
putchar(i);
if (i < '9')
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');

return (0);
}
