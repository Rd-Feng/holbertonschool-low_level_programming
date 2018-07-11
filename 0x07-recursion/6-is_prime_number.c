#include "holberton.h"

/**
 * helper - guess a factor of n that is not itself or 1
 * @guess: a guess factor
 * @n: n
 *
 * Return: 1 if no valid factor found, 0 otherwise
 */
int helper(int guess, int n)
{
	if (guess * guess > n)
		return (1);
	else if (n / guess * guess != n)
		return (helper(guess + 1, n));
	else
		return (0);
}

/**
 * is_prime_number - check if an integer is a prime number
 * @n: candidate integer
 *
 * Return: 1 if true, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (helper(2, n));
}
