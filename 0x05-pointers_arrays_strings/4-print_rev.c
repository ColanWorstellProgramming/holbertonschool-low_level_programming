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
int y = 1;
int counter = 0;
int revcounter = 0;

while (s[y] != '\0')
{
counter++;
y++;
}

char arx[y];

for (i = counter; i > 0; i--)
{
arx[revcounter] = s[counter];
revcounter++;
}

while (counter >= 0)
{
putchar(arx[counter]);
counter--;
}

}
