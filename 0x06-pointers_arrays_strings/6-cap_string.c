#include "holberton.h"

/**
 * cap_string - | starts the file
 * @s: - | var
 * Return: - | ends the file
 */

char *cap_string(char *s)
{

char x[13] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
int i = 0;
int y;

while (s[i] != '\0')
{

if (i == 0)
{
s[0] = s[0] - 32;
}

else
{

for (y = 0; y < 13; y++)
{

if (s[i + 1] > 96 && s[i + 1] < 173 && s[i] == x[y])
{

s[i + 1] = s[i + 1] - 32;

}
}
}
i++;
}

return (s);
}
