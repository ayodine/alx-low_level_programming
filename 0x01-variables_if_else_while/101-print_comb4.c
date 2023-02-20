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
			putchar(j + 48);
			putchar(k + 48);
			putchar(l + 48);
			if (i < 999)
			{
				putchar(44);
				putchar(32);
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}

