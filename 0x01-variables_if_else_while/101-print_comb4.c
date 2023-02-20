#include <stdio.h>
/**
 * main - print digit from 0-10
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i < 1000)
	{
		int j = (i / 100) % 10;
		int k = (i / 10) % 10;
		int l = i % 10;

		if (j != k && j != l && k != l && k > j && l > k)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');
			if (i < 999)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}

