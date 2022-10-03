#include "main.h"

/**
 *print_alphabet - Alphabet in lowercase
 *
 * Return: Always 0 (success)
 *
 */
void print_alphabet(void)
{
	char r;

	for (r = 'a'; r <= 'z'; r++)
	{
		_putchar(r);
	}
	_putchar('\n');
}
