#include <stdlib.h>
#include <stdio.h>

char *mulTen(char *num, int n);

char *move_left(char *a, int size, int num);

char *infinite_add(char *n1, char *n2, char *r, int size_r);

int isNumber(char *str);

char *cleanLeadingZero(char *n);

/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	unsigned long len1 = 0, len2 = 0, total = 0;
	unsigned long i, j;
	char *ptr = NULL, *buf = NULL;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else if (!(isNumber(argv[1]) && isNumber(argv[2])))
	{
		printf("Error\n");
		exit(98);
	}
	while (argv[1][len1])
		len1++;
	while (argv[2][len2])
		len2++;
	/* temp size of result */
	total = len1 + len2 + 1;
	ptr = malloc(sizeof(char) * total);
	buf = malloc(sizeof(char) * total);
	if (!ptr || !buf)
	{
		free(ptr);
		free(buf);
		return (-1);
	}
	ptr = infinite_add("0", "0", ptr, total);
	buf = infinite_add("0", "0", buf, total);
	for (i = 0; i < len2; i++)
	{
		for (j = 0; j < argv[2][i] - (unsigned long)'0'; j++)
		{
			buf = infinite_add(buf, argv[1], buf, total);
		}
		buf = mulTen(buf, len2 - i - 1);
		ptr = infinite_add(buf, ptr, ptr, total);
		/* reset buffer */
		buf = infinite_add("0", "0", buf, total);
	}
	ptr = cleanLeadingZero(ptr);
	printf("%s\n", ptr);
	free(buf);
	free(ptr);
	return (0);

}
/**
 * mulTen - multiply a given number by 10 for n times. buffer holding number n
 * must have enough space to hold the result.
 * @num: number
 * @n: number of times
 *
 * Return: pointer to result
 */
char *mulTen(char *num, int n)
{
	unsigned long len = 0;

	while (*(num + len))
		len++;
	while (n-- > 0)
		*(num + len++) = '0';
	*(num + len) = '\0';
	return (num);
}

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

/**
 * isNumber - check if a string consists only of digits
 * @str: string
 *
 * Return: 1 if true, 0 otherwise
 */
int isNumber(char *str)
{
	int ret = 1;

	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			ret = 0;
			break;
		}
		str++;
	}
	return (ret);
}

/**
 * cleanLeadingZero - removing leading 0's in a number
 * @n: number represented in string
 *
 * Return: pointer to resulting string
 */
char *cleanLeadingZero(char *n)
{
	unsigned long strSize = 0, numSize = 0, i = 0;
	int valid = 0;

	while (*(n + strSize))
	{
		if (*(n + strSize) != '0')
		{
			valid = 1;
			numSize++;
		}
		else
		{
			if (valid)
				numSize++;
		}
		strSize++;
	}
	if (numSize)
	{
		while (i < numSize)
		{
			*(n + i) = *(n + strSize - numSize + i);
			i++;
		}
		*(n + numSize) = '\0';
	}
	else
	{
		*n = '0';
		*(n + 1) = '\0';
	}
	return (n);
}
