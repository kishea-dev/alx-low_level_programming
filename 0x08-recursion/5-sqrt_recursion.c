#include "main.h"

/**
 * _sqrt_recursion - checks for perfect square
 * @n: input
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n + 1) / 2));
}
/**
 * squareroot - checks if perfect square
 * @n: input
 * @i: counter
 * Return: if square root
 */
int squareroot(int n, int i)
{
	if (n * n == i)
		return (n);
	if (n * n > i)
		return (-1);
	return (checker(n + 1, i));
}
