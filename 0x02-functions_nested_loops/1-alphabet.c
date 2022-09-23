#include "main.h"

/**
 * function print_alphabet -> prints lowercase alphahbets
 * description: prints lower case alphabets
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
