#include "main.h"

/**
 * set_bit - sets the bit at a index in a decimal number to 1
 * @n: pointer to the decimal number to modify
 * @index: the index of the bit to set to 1
 * Return: 1 if successful, -1 if unsuccessful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

