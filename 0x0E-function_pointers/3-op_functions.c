#include "3-calc.h"
/**
 * op_add - add two integers
 * @a: int a
 * @b: int b
 *
 * Return: sum of integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract second int from the first int
 * @a: first int
 * @b: second int
 *
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: int a
 * @b: int b
 *
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide first int with the second int
 * @a: first int
 * @b: second int
 *
 * Return: result. Exit with 100 if second int is 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculate remainder of division of a by b
 * @a: int
 * @b: int
 *
 * Return: result. Exit with 100 if second int is 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
