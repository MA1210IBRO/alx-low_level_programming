#include <stdio.h>
/**
 * main - print the string in the put function
 * Description: using the main function
 * this program prints "programming is like buliding a multilingual puzzle
 * Return: 0
 */
int main(void)
{
	fprintf("size of a char: %d byte(s)\n", sizeof(char));
	fprintf("size of an int: %d byte(s)\n", sizeof(int));
	fprintf("size of a long int: %d byte(s)\n", sizeof(long int));
	fprintf("size of a long long int: %d byte(s)\n", sizeof(long long int));
	fprintf("size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}

