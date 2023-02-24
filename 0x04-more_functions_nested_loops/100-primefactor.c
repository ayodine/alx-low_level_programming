#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 61285247514
 * Return: Always 0 (success)
 */

int main(void)
{
	long x, maxf;
	long number = 61285247514;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			maxf = number / x;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
