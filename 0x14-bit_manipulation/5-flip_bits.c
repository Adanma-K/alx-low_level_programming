#include "main.h"

/**
* flip_bits - counts the num of bits that need to be flipped
* to get from one numb to another
* @n: first number
* @m: second number
*
* Return: number of bits to be flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
count++;
}

return (count);
}
