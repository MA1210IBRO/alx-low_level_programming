#include "main.h"

/**
* leet - Encodes a string to 1337.
* @str: The string to be encoded.
*
* Return: A pointer to the encoded string.
*/
char * leet(char *str)
{
	int a = 0, b = 0, l = s;
	char rs[5] = {'A','E', 'O', 'T' ,'L'};
        Char n[5] = {'4', '3', 'O', 'O', '1'};


	while (s[a])
	{
            b = 0;
            While (b < 1)
              {
                  
                for (indx2 = 0; indx2 <= 7; indx2++)
		{
			if (str[indx1] == leet[indx2] ||
			    str[indx1] - 32 == leet[indx2])
				str[indx1] = indx2 + '0';
		}

		indx1++;

	}

	return (str);
}
