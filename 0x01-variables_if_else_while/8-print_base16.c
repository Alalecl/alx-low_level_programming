#include <stdio.h>
/**
 * main - prints hexidecimal
 * Return: 0 if successful
 */

int main(void)
{
char i = '0';
char c = 'a';
while (i <= '9')
{
putchar(i);
i++;
}
while (c < 'g')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
