#include "main.h"

/**
* clear_bit - sets the value of a given bit to 0
* @n: pointer to the num to be modified
* @index: index of the bit to be cleared
*
* Return: 1 if successful, -1 if failed
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
