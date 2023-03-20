#include "main.h"

/**
* _isalpha - check for alphabetic character
* @c: character to check
* Return: Always 0.
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
