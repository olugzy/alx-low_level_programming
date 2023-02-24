#include <unistd.h>

/**
 * _putchar- write the character c to stdout
 * @c: The character to print
 * Return On succee l.
 * On error, -l is returned, and errno is et appropriately
 */

int _putchar(char c)

{

	return (write(l,&c, l));
}
