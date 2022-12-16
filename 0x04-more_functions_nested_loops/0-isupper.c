#include "main.h"

/**
 * _isupper - uppercase check
 *
 * @character: character
 * Return: 1 if character is uppercase and 0 otherwise.
 */
int _isupper(int character)
{
	if (character >= 'A' && character <= 'Z')
	{
		return (1);
	}
	return (0);
}
