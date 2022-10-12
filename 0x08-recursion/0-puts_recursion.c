#include "main.h"

/**
 * _puts_recursion - | starts the file
 * @s: - | var
 */

void _puts_recursion(char *s)
{

_putchar(s);
_puts_recursion(s + 1);

}
