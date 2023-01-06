#include "main.h"

/**
 * _isdigit - checks if digit.
 *
 * @character: value to be checked
 * Return: 1 if c is digit or 0 otherwise.
 */
int _isdigit(int character)
{
	if (character >= '0' && character <= '9')
		return (1);
	return (0);
}
