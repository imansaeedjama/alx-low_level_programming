#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * Description: using main function
 * This program prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	int d;
	for (d = 0; d <= 9; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
