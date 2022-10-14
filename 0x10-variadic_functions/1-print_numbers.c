<<<<<<< HEAD
#include "variadic_function.h"
=======
#include "variadic_functions.h"
>>>>>>> e8fe14a17c40a4272722f4e3bca956d203b17f04
#include <stdio.h>
#include <stdarg.h>

/**
 * print_num: - print numbers, followed by new line.
 * @separator: The string in be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable numo to be printed.
 */
<<<<<<< HEAD
void print_numbers(const char *separator, const unsigned int n, ...);
=======
void print_numbers(const char *separator, const unsigned int n, ...)
>>>>>>> e8fe14a17c40a4272722f4e3bca956d203b17f04
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
