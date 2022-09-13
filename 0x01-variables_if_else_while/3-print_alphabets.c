#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Description: using the main fucntion
 * This program prints the alphabet in lowercase then uppercase
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)

	{

			putchar(ch);

	}

	for (ch = 'A' ; ch <= 'Z' ; ch++)

	{

			putchar(ch);

	}
	putchar('\n');
	return (0);
}
