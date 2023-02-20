#include <stdio.h>
/**
 * main - print digit from 0-10
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i < 90)
	{
		int j = i % 10;
		int k = i / 10;

		if (k != j && K < j)
		{
			putchar(k + 48);
			putchar(j + 48);
			if (i < 89)
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
