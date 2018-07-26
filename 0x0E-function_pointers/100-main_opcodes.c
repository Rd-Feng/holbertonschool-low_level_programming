#include <stdio.h>
#include <stdlib.h>
/**
 * main - print opcodes of its own main function
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 on success, exit with status 1 on wrong number of argument,
 * exit with status 2 when getting negative argument
 */
int main(int argc, char **argv)
{
	int i, n;
	int (*ptr)(int, char**) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%02x ", *((unsigned char *)ptr + i));
		else
			printf("%02x\n", *((unsigned char *)ptr + i));
	}
	return (0);
}
