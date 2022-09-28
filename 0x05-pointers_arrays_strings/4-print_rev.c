#include "main.h"
#include <stdio.h>

/**
 * print_rev - | starts the file
 * @s: - | var
 * Return: - | ends the file
 */

void print_rev(char *s)
{

int i = 0;
int y = 0;
int counter = 0;
int revcounter = 0;
char x[];

while (x[y] != '\0')
{
counter++;
}

for (i = counter; i > 0; i--)
{
x[revcounter] = s[counter];
revcounter++;
}

while (counter >= 0)
{
putchar(x[counter]);
counter--;
}

}
