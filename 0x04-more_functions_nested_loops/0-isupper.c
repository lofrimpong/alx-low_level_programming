#include "main.h"

/**
 * _isupper - Checks if a letter is super
 * @c: The number to be checked
 * Return: 1 for super letter and 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
