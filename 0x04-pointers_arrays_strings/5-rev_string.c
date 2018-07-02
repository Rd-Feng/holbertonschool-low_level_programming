#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int head, tail;
	int len;
	char tmp;

	for (len = 0; s[len] != '\0'; len++)
		;
	printf("len is %d\n", len);
	head = 0;
	tail = len - 1;
	while (head < tail)
	{
		tmp = *(s + head);
		*(s + head) = *(s + tail);
		*(s + tail) = tmp;
		head++;
		tail--;
	}
}
