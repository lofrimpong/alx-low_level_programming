#include "main.h"
#include <unistd.h>

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	putchar c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar('\n');
	}
}
