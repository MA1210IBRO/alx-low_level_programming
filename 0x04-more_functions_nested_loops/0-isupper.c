#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks for a character is upppercase or not
 * @c: character to be tested
 * Return: 1 whether it is, 0 otherwise
 */

int _isupper(int c);
{
	if ((c >= 'A') && (c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

