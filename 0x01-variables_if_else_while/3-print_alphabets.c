#include <stdio.h>
/**
 * main - print a - z and A - Z
 * Return: 0 if successful
 */

int main(void)
{
char c = 'a';
char C = 'A';

while (c <= 'z')
{
putchar(c);
c++;
}
while (C <= 'Z')
{
putchar(C);
C++;
}
putchar('\n');
return (0);
}
