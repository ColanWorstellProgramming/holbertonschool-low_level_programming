#include "main.h"
#include <stdio.h>

/**
 * main - | starts the file
 * Return: - | ends the file
 */

int main(void)
{

int i;

for (i = 1; i < 101; i++)
{

if ((i % 15) == 0)
{
printf("FizzBuzz");
}
if ((i % 3) == 0)
{
printf("Fizz");
}
if ((i % 5) == 0)
{
printf("Buzz");
}
else
{
printf("%i", i);
}

printf("\n");
}
return (0);
}
