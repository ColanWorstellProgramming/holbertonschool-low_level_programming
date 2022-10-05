#include "holberton.h"

/**
 * leet - | starts the file
 * @s: - | var
 * Return: - | ends the file
 */

char *leet(char *s)
{

char x[10] = "aAeEoOtTlL";
char y[10] = "4455007711";

int i = 0;
int z;

while (s[i])
{

for (z = 0; z < 10; z++)
{

if (s[i] = x[z])
{
s[i] = y[z];
}	

i++;
}
}

return (s);
}
