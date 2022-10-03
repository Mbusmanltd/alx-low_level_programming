#include "main.h"

<<<<<<< HEAD


/**
 *
 *  * _puts - prints a string
 *
 *   * followed by a new line to stdout
 *
 *    * @str: string to print
 *
 *     * Return: nothing
 *
 *      */



void _puts(char *str)

{

		int i = 0;



			while (str[i])

					{

								_putchar(str[i]);

										i++;

											}

				_putchar('\n');

=======
/**
 * _puts - prints a string
 * followed by a new line to stdout
 * @str: string to print
 * Return: nothing
 */

void _puts(char *str)
{
	int s = 0;

	while (str[s])
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
>>>>>>> 0acd7f73402b38ff4a630a3071e875e9713307a1
}
