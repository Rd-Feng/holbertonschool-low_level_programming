#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change
 * @argc: number of arguments
 * @argv: amount of money needed to give back
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num = 0;
	int money;
	int coin[] = {25, 10, 5, 2, 1};
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	for (i = 0; money > 0 && i < 5; i++)
	{
		while (money - coin[i] >= 0)
		{
			money -= coin[i];
			num++;
		}
	}
	printf("%d\n", num);
	return (0);
}
