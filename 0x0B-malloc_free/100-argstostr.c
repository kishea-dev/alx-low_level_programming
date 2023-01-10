#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: pointer
 */
char *argstostr(int argc, char **argv)
{
	char *aout;
	int i, j, k, l;

	if (argc == 0)
		return (NULL);

	for (l = i = 0; i < argc; i++)
	{
		if (argv[i] == NULL)
			return (NULL);

		for (j = 0; argv[i][j] != '\0'; j++)
			l++;
		l++;
	}

	aout = malloc((l + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (i = j = ia = 0; k < l; j++, k++)
	{
		if (argv[i][j] == '\0')
		{
			aout[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (ia < l - 1)
			aout[k] = argv[i][j];
	}
	aout[k] = '\0';

	return (aout);
}
