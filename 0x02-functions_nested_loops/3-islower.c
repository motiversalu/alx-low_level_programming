#include "main.h"
#include <ctype.h>

/**
 * _islower - Short description, single line
 * @c: contains value to be compared
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
