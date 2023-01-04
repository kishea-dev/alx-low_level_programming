#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string.
 *
 * @s: string.
 * @c: character to be located.
 * Return: pointer to first occurrence of NULL if no character found.
 */
/**
 * _strchr - locates a character in a string
 * @s: the memory area
 * @c: constant byte
 *
 * Return: a pointer when the character is found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}