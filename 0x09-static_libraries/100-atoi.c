#include "main.h"

<<<<<<< HEAD


/**
 * _atoi - convert a string to an integer.~
 * @s: the string to be comverted.
 *
 * Return: The integer value of the comverted string.
 */



int _atoi(char *s)

{

		int sign = 1;

	        unsigned int num = 0;



	do {


	              if (*s == '-')										sign *= -1;

									else if (*s >= '0' && *s <= '9')
											num = (num * 10) + (*s - '0');

											else if (num > 0)
													break;

									} while (*s++);


	return (num * sign);

=======
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * sign);
>>>>>>> 0acd7f73402b38ff4a630a3071e875e9713307a1
}
