#include "main.h"

/**
 * clear_bit - function
 * @n: var
 * @index: var
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m, bits = 0;

while (xor > 0)
{
	bits += (xor & 1);
	xor >>= 1;
}
return (bits);
}
