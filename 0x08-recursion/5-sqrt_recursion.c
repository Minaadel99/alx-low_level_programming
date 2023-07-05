#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - return sq root of a number
 * @n: number to cal the sq root of
 * Return: the resulting sq root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - resurses to find the natural
 * @n: number to cal the sq root
 * @i: iterator
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}