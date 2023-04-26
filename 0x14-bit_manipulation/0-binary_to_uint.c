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
unsigned int dec_val = 0;
int i = 0;

if (b == NULL)
return (0);

while (b[i] != '\0')
{
if (b[i] == '0' || b[i] == '1')
{
dec_val = dec_val << 1;
dec_val += b[i] - '0';
i++;
}
else
{
return (0);
}
}

return (dec_val);
}
