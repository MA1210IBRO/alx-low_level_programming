#include "variadic_function.h"
#include <stdio.h>
#include <stdio.h>

/**
 * print_num: - print numbers, followed by new line.
 * @separator: The string in be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable numo to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...);
{
	va_list nums;

	unigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int))

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
