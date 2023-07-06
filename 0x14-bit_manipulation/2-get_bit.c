#include "main.h"

/**
 * get_bit - this will return the value of a bit at any given index.
 * @n: these are the checking bits
 * @index: which to check bit
 *
 * Return: the value of the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	res = n & div;
	if (res == div)
		return (1);

	return (0);
}
