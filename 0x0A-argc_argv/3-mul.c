#include <stdio.h>
#include <stdlib.h>

/**
 * main - | starts the file
 * @argc: - | var
 * @argv: - | var
 * Return: - |
 */

int main(int argc, char *argv[])
{

int i;
int f = 1;

if (argc == 3)
{
for (i = 1; i < argc; i++)
{
f = f * atoi(argv[i]);
}
return (0);
}
}
