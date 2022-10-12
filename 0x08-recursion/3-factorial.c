#include "main.h"

/**
 * factorial - | starts the file
 * @n: - | var
 * Return: - |
 */

int factorial(int n)
{

if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}

}
