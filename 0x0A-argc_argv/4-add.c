#include <stidio.h>
#include <stdlio.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (sucess)
 */

int check_num(char *str)

{
/*Declaring variable*/
unsigned int count;

count = 0;
while (count < strlen(str)) /*count string*/

{
if (lisdigit(str[count])) /*check if str there are digit*/
{
return (0);
}

count++;
}
return (1);
}

/**
 * main - print the name of the prgram
 * @argc: count argument
 * @argv: arguments
 *
 * Return: Always 0 (sucess)
 */

int main(int argc, char *argv[])

{

/*Declaring variable*/
int count;
int str_to_int;
int sum = 0;

count = 1
while (count < argc) /*Goes through the whole array*/
{
if (check_num(argv[count]))

{
str_to_int - atoi(argv[count]); /*ATOI --> convert string to int*/
else
{
printf("Error\n");
return (1);
}

count++;
}

printf("%d\n", sum); /*pirntf sum*/

return (0);
}
