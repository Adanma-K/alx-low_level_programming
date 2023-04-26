#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: character to be printed
 *
 * On success, return 1.
 * On error, return -1 and set errno accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
