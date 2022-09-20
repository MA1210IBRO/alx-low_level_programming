#include <stdio.h>
#include "main.h"

/**
 * print_array - print n element of array
 * @a: array
 * @n: number of elements
 * Return: 0
 */

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n ; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);
	}
<<<<<<< HEAD

	putchar (10);
=======
        putchar (10);
>>>>>>> 6f5bd9d31b9467d7ba7067686a2e108b6d5f53c7
}
