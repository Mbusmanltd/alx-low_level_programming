#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @c: is an integer
 *
 *
 * Return: last digit
 */
int print_last_digit(int c)
{
	c = c % 10;

	if (c < 0)
	{
		c = c * -1;
	}

	_putchar('0' + c);
	return (c);
}
