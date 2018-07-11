#include "holberton.h"

/**
 * helper - guess the square root of n
 * @guess: a guess
 * @n: number
 *
 * Return: square root of n, -1 if not found
 */
int helper (int guess, int n)
{
	if (guess * guess > n)
		return (-1);
	else if (guess * guess == n)
		return (guess);
	else
		return (helper(guess + 1, n));
}

/**
 * _sqrt_recursion - calculate natural square root of a number
 * @n: number
 *
 * Return: natural square root of the number, -1 if
 * no natural square root exist
 */
int _sqrt_recursion(int n)
{
	return (helper(0, n));
}
