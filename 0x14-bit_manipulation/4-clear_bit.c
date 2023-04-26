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
if (n == NULL || index >= sizeof(unsigned long int) * 8)
return (-1);

unsigned long int mask = 1;

mask <<= index;
mask = ~mask;
*n = (*n & mask);

return (1);
}
