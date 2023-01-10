#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @str1: first string.
 * @str2: second string.
 * Return: pointer of an array of chars
 */
char *str_concat(char *str1, char *str2)
{
	char *strout;
	unsigned int i, j, k, limit;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";

	for (i = 0; str1[i] != '\0'; i++)
		;

	for  (j = 0; s2[j] != '\0'; j++)
		;

	strout = malloc(sizeof(char) * (i + j + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for  (k = 0; k < i; k++)
		strout[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		strout[k] = s2[j];

	return (strout);
}

