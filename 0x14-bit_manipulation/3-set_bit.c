#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the unsigned long int number to set the bit in.
 * @index: The index, starting from 0, of the bit to set.
 *
 * Return: 1 if it worked or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 16))
		return (-1);

	*n |= (1 << index);

	return (1);
}
