#include <stdio.h>

/**
 * main - alphabet lower and upper
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar('a' + i);
	}
	for (i = 0; i < 26; i++)
	{
		putchar('A' + i);
	}
	putchar('\n');
	return (0);
}
