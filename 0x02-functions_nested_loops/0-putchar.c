#include "main.h"
<<<<<<< HEAD



/**
 *
 *  * main - prints Putchar
 *
 *   *
 *
 *    * Description: prints _putchar
 *
 *     *
 *
 *      * Return: 0 (Success)
 *
 *       */



int main(void)

{

		_putchar('_');

			_putchar('p');

				_putchar('u');

					_putchar('t');

						_putchar('c');

							_putchar('h');

								_putchar('a');

									_putchar('r');

										_putchar('\n');



											return (0);

=======
/**
 * main - Entry point
 *
 * Return: always 0(Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);
>>>>>>> 0acd7f73402b38ff4a630a3071e875e9713307a1
}
