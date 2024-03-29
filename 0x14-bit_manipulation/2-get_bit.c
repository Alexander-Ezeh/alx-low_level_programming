#include "main.h"

/**
 * get_bit - returns the value of the bit
 * @n: the decimal number to search
 * @index: the index of the bit to retrieve
 * Return: the value of the bit (0 or 1)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

