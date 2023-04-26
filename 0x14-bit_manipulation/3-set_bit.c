#include "main.h"

/**
* set_bit - Sets the value of a bit at a given index to 1.
* @n: A pointer to the number to modify.
* @index: The index of the bit to set.
*
* Return: 1 if successful, or -1 if an error occurred.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (n == NULL || index >= sizeof(unsigned long int) * 8)
return (-1);

unsigned long int mask = 1;

mask <<= index;
*n = (*n | mask);

return (1);
}
