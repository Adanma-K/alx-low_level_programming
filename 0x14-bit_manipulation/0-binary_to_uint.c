#include "main.h"

/**
* binary_to_uint - Convert a binary string to an unsigned integer.
* @b: The binary string to convert.
*
* Return: The converted unsigned integer, or 0 if b is NULL or contains
* non-binary characters.
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
