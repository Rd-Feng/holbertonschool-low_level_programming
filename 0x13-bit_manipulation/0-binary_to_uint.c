#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: converted number, 0 on error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, len = 0, i, mul;

	if (b)
	{
		while (b[len])
			len++;
		for (i = 0, mul = 1; i < len; i++, mul = mul << 1)
		{
			if (b[len - i - 1] != '1' && b[len - i - 1] != '0')
				return (0);
			if (b[len - i - 1] == '1')
				num += mul;
		}
	}
	return (num);
}
