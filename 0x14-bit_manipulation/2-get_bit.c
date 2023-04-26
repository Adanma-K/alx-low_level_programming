#include "main.h"

/**
* get_bit - displays the value of a bit at a given index in a decimal num.
* @n: The decimal numb to be searched.
* @index: The index of the bit to be acquired.
*
* Return: The value of the bit at the given index, or -1 if the index is
* out of range.
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
return (-1);

return ((n >> index) & 1);
}
