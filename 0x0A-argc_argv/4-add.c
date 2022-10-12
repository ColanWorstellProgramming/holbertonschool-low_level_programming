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
int sum = 0, i, j;

for (i = 1; i < argc; i++)
{
j = 0;
while (argv[i][j] != '\0')
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("%s\n", "Error");
return (1);
}
j++;
}
if (atoi(argv[i]) > 0)
{
sum += atoi(argv[i]);
}
j++;
}
printf("%d\n", sum);
return (0);
}
