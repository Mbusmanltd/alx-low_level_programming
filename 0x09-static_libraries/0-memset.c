#include "main.h"

<<<<<<< HEAD


/**
 *
 *  * *_memset - fills memory with a constant byte.
 *
 *   * @s: constant to put the pointer
 *
 *    * @b: constant
 *
 *     * @n: max bytes to use
 *
 *      * Return: s
 *
 *       */



char *_memset(char *s, char b, unsigned int n)

{

		unsigned int i;



			for (i = 0; n > 0; i++, n--)

					{

								s[i] = b;

									}

				return (s);

=======
/**
 * _memset - a function that fills memory with constant bytes
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
>>>>>>> 0acd7f73402b38ff4a630a3071e875e9713307a1
}
