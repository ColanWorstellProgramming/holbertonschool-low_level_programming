#include <stdio.h>

/**
 * main - | starts the file
 * @argc: - | var
 * @argv: - | var
 * Return: - |
 */

int main(int argc, char *argv[])
{

int x = argv[1];
int y = argv[2];
int f;
int i;

if (argc == 3)
{
f = x * y;
printf("%d\n", f);
return (0);
}
else
{
return (1);
}
}
