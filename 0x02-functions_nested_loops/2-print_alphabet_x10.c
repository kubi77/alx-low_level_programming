#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int j;
	int x;

	for (j = 0; j <= 9; j++)
	{
		for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
	}
}
