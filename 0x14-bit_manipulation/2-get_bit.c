#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index in a decimal number.
* @n: The decimal number to be searched.
* @index: The index of the bit to be acquired.
*
* Return: The value of the bit at the given index,
* or -1 if the index is out of range.
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);

unsigned long int mask = 1;
mask <<= index;

return ((n & mask) ? 1 : 0);
}
