#include <stdio>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: Argument
 *
 * Return: Always 0 (sucess)
 */

int main(int argc, char *argv[])
{
(void) argv; /*ignore argv*/
printf("%s\n", argc - 1);

return (0);
}
