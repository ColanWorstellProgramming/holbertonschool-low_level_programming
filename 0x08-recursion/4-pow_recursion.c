#include "main.h"

/**
 * _pow_recursion - | starts the file
 * @x: - | var
 * @y: - | var
 * Return: - |
 */

int _pow_recursion(int x, int y)
{

if (y < 0)
{
return (-1);
}
else if (y == 1)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}

}
