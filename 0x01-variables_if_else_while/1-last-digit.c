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

String nx = '"Last digit of " + n + "is "'

if (n > 5)

{

nx += "and is greater than 5"

}
else if (n == 0)
{

nx += "and is 0"

}

else
{

nx += "and is less than 6 and not 0"

}

}

printf('\n')

return (0);

}
