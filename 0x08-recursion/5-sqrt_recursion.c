#include "main.h"

/**
 * _sqrt_recursion - | starts the file
 * @n: - | var
 * Return: - |
 */

int _sqrt_recursion(int n)
{

if (n <= 0)
{
return (-1);
}
else
{
return (_sqrt(n, 0));
}

}

/**
 *  * _sqrt - | starts the file
 *   * @x: - | var
 *    * @y: - | var
 *     * Return: - |
 *      */

int _sqrt(int x, int y)
{

if (x == ( y * y))
{
return (x);
}
else if (x <= (y * y))
{
return (-1);
}
else
{
return (_sqrt(x, y + 1));
}

}
