#include "main.h"
/**
 * main - Entry point
 * Description:'print aphabets'
 * Return: Always 0 ( success)
 */

void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		_putchar(la);
	}
	_putchar('\n');
}
