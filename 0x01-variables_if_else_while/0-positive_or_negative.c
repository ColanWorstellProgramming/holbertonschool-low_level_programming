#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - starts file
 * Return: - ends file
 */

int main(void)
{

int x;

srand(time(0));

x = rand() - RAND_MAX / 2;

if (x > 0)

printf("%d is negative\n", x);

else if (x < 0)

printf("%d is negative\n", x);

else

printf("%d is zero\n", x);

return (0);

}
