#include <stdio.h>
/**
 * main - patience and persistence
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			putchar(i + '0');
			if (j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
