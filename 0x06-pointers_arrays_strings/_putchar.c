#include "main.h"
#include <unistd.h>


/**
 * _putchar - wrrites the character c to stdout
 * @c: The character to print
 *
 * Return: on sucess !.
 * on error, -1 is returned, and errno is set approprate
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
