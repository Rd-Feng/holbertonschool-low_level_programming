#include <stdio.h>

/**
 * fibonacci - Prints first 98 fibonacci numbers starting 1, 2
 *
 * Return: 0 on success
 */
int main(void)
{
	/* each holds 7 digits*/
	unsigned long n1, n2, n3;
	unsigned long m1, m2, m3;
	unsigned long tmp1, tmp2, tmp3;
	int i;

	n1 = n2 = m1 = m2 = tmp1 = tmp2 = 0;
	n3 = 1;
	m3 = 2;
	printf("%lu, ", n3);

	for ( i = 1; i < 98; i++)
	{
		if (m1 != 0)
			printf("%lu%07lu%07lu", m1, m2, m3);
		else if(m2 != 0)
			printf("%lu%07lu", m2, m3);
		else
			printf("%lu", m3);

		if (i != 98 - 1)
			printf(", ");
		else
			printf("\n");
		/* calculate tmp */
		tmp3 = n3 + m3;
		if (tmp3 >= 10000000)
		{
			tmp2++;
			tmp3 %= 10000000;
		}
		tmp2 = tmp2 + n2 + m2;
		if (tmp2 / 10000000 != 0)
		{
			tmp1++;
			tmp2 %= 10000000;
		}
		/* tmp1 will not go out of bound in this case */
		tmp1 = tmp1 + n1 + m1;

		n1 = m1;
		n2 = m2;
		n3 = m3;
		m1 = tmp1;
		m2 = tmp2;
		m3 = tmp3;
		tmp1 = tmp2 = tmp3 = 0;
	}
	return (0);
}
