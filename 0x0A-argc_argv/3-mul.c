#include <stdio.h>

/**
 * main - | starts the file
 * @argc: - | var
 * @argv: - | var
 * Return: - |
 */

int main(int argc, char *argv[])
{

int f = 1;
int i;

if (argc == 3)
{

for (i = 1; i < argc; i++)
{
f *= atoi(argv[i]);
}

printf("%d\n", f);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
