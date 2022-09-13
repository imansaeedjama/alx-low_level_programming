#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - will assign a random number to the variable n
 *
 * Description: using the main function
 * This program prints the last digit stored in n
 * Return: 0
 */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;

	if (i > 5)
	{
		printf("Last digit of %d is %d and its greater than 5\n", n, i);
	}
	else if (i == 0)
	{
		printf("Last digit of %d is %d and its 0\n", n, i);
	}
	else
	{
		printf("Last digit of %d is %d and its less than 6 and not 0\n", n, i);
	}
	return (0);
}
