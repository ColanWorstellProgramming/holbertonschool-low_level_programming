#include "holberton.h"

/**
 * cap_string - | starts the file
 * @s: - | var
 * Return: - | ends the file
 */

char *cap_string(char *s)
{

char x[13] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125}
char cur;
int i = 0;
int y;

while (s != '\0')
{

for (y = 0; y < 13; y++)
{

if (i == 0)
{
s[i] = s[i] - 32;
}

if (s[i] = x[y])
{

s[i+1] = s[i+1] - 32;

}
i++;
}
}

return (s);
}
