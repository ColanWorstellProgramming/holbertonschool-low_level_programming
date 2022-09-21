#include <stdio.h>

/**
 * main - | starts file
 * Return: - | ends file
 */

int main(void)
{

int i;
char x;

for (i = 0; i <= 10; i++)
{

putchar((i % 10) + '0');

}

for (x = 'a'; x <= 'f'; x++)
{

putchar(x);

}

return (0);

}
