#include <stdio.h>

/**
 * main - for loop that prints alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
c = 'a';

while (c <= 'z')
{
if (c != 'q' && c != 'e')
putchar(c);
c++;
}
putchar('\n');
return (0);
}
