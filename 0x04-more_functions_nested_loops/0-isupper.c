#include "main.h"
#include <stdio.h>

/**
 * _isupper - uppercase character
 * @c: character for checking
 * Return: 1 for lower case or 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 132)
	{
		return (1);
	}
	return (0);
}
