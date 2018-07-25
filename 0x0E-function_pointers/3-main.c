#include "3-calc.h"
/**
 * main - perform calculation on two integers
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int n, m;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n = atoi(argv[1]);
	m = atoi(argv[3]);
	ptr = get_op_func(argv[2]);
	if (!ptr)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", ptr(n, m));
	return (0);
}
