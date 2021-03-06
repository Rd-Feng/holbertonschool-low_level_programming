#include "holberton.h"
#include <stdio.h>

/**
 * isPrintable - check if c is printable
 * @c: candidate character
 *
 * Return: true if printable, false otherwise
 */
int isPrintable(char c)
{
	return (c >= 32 && c <= 126);
}
/**
 * print_buffer - print content in buffer b
 * @b: buffer
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;
	int pos;
	char *ptr = b;
	int size2 = size;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (pos = 0; size > 0; pos++)
	{
		printf("%08x: ", pos * 10);
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 2; j++)
			{
				if (size > 0)
				{
					printf("%02x", *b);
					size--;
					b++;
				}
				else
				{
					printf("  ");
				}
			}
			printf(" ");
		}
		for (i = 0; i < 10; i++)
		{
			if (size2 > 0)
			{
				printf("%c", isPrintable(*ptr) ? (*ptr) : '.');
				size2--;
				ptr++;
			}
		}
		printf("\n");
	}
}
