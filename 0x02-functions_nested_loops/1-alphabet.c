#include "main.h"

/**
 * main - check the code
 * function print_alphabet -> prints lowercase alphahbets
 * description: prints lower case alphabets
 * Return: 0
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
