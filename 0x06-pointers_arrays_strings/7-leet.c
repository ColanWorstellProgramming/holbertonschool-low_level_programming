#include "holberton.h"

/**
 * leet - | starts the file
 * @s: - | var
 * Return: - | ends the file
 */

char *leet(char *s)
{

int z;
int i = 0;
char x[10] = "aAeEoOtTlL";
char y[10] = "4433007711";

while (s[i] != '\0')
{

for (z = 0; z < 10; z++)
{

if (s[i] == x[z])
{

s[i] = y[z];
}
}
i++;
}
return (s);
}
