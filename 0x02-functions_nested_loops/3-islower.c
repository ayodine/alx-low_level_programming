#include "main.h"

/**
 * _islower - lowercase character
 * @c: character for checking
 * Return: 1 for lower case or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
