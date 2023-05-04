#include "main.h"

/**
 * clear_bit - sets the value of a bit in a decimal number to 0
 * @n: pointer to the decimal number to modify
 * @index: the index of the bit to clear
 * Return: 1 if successful, -1 if unsuccessful
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

