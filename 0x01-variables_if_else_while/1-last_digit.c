#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main | starts file
 * Return: | ends file
 */

int main(void)
{

int n;

srand(time(0));

n = rand() - RAND_MAX / 2;

char nx[] = "Last digit of %d is %d ", n, n % 10;

if (n > 5)

{

printf(nx, "and is greater than 5");

}
else if (n == 0)
{

printf(nx, "and is 0");

}

else
{

printf(nx, "and is less than 6 and not 0");

}

printf("\n");

return (0);

}
