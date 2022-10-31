#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads atext file and prints it to posix stdout.
 * @filename: a pointer to the name of the file.
 * @letters: the number of letter the function should read and prints
 *
 * Return: if the function fails or filname is null - 0
 *	o/w - the actual number of bytes the function can read
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

