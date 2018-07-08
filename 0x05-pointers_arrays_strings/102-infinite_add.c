#include "holberton.h"
#include <stdio.h>
/**
 * move_left - move the integer in an array to most left position
 * and append a null byte right after the integer
 * @a: array
 * @size: size of array
 * @num: number of digits in integer
 *
 * Return: pointer to the resulting array
 */
char *move_left(char *a, int size, int num)
{
	int i;
	char *ptr;

	for (i = 0, ptr = (a + size - num); i < num; i++, ptr++)
		*(a + i) = *ptr;
	*(a + num) = '\0';
	return (a);
}

/**
 * infinite_add - adds two numbers
 * @n1: number
 * @n2: number
 * @r: buffer to store result
 * @size_r: size of r
 * Return: 0 on success
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/* number of digits of n1, n2, and their sum */
	int size1, size2, size_sum = 0;
	char tmp;
	int i, j, k = size_r - 1;
	int carry = 0;

	for (size1 = 0; *(n1 + size1) != '\0'; size1++)
		;
	for (size2 = 0; *(n2 + size2) != '\0'; size2++)
		;
	if (size1 >= size_r || size2 >= size_r)
		return (0);
	for (i = size1 - 1, j = size2 - 1; i >= 0 || j >= 0; i--, j--)
	{
		if (i < 0)
		{
			tmp = carry + *(n2 + j);
			carry = 0;
			if (tmp > '9')
			{
				carry = 1;
				tmp = '0';
			}
		}
		else if (j < 0)
		{
			tmp = carry + *(n1 + i);
			carry = 0;
			if (tmp > '9')
			{
				carry = 1;
				tmp = '0';
			}
		}
		else
		{
			tmp = *(n1 + i) - '0' + *(n2 + j) + carry;
			carry = 0;
			if (tmp > '9')
			{
				carry = 1;
				tmp -= 10;
			}
		}
		*(r + k--) = tmp;
		size_sum++;
	}
	if (carry > 0)
	{
		if (size_sum < size_r - 1)
		{
			*(r + k--) = '1';
			size_sum++;
		}
		else
		{
			return (0);
		}
	}
	return (move_left(r, size_r, size_sum));
}
