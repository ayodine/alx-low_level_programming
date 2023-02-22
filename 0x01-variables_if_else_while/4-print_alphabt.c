#include <stdio.h>
/**
 * main - exclude q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q')
		{
			if (letter != 'e')
			{
				putchar(letter);
			}
		}
	}
	putchar('\n');
	return (0);
}

