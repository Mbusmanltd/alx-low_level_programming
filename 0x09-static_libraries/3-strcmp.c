#include "main.h"

<<<<<<< HEAD


/**
 *
 *  * _strcmp - function that compares two strings
 *
 *   * @s1: A pointer to the first string to be compared.
 *
 *    * @s2: A pointer to the second string to be compared.
 *
 *     *
 *
 *      * Return: If str1 < str2, the negative difference of
 *
 *       * the first unmatched characters.
 *
 *        * If s1 == s2, 0.
 *
 *         * If s1 > s2, the positive difference of
 *
 *          * the first unmatched characters.
 *
 *           * if s1 , s2, thew negative differnce of the first unmatched characters.
 *
 *            */

int _strcmp(char *s1, char *s2)

{

		while ((*s1 && *s2) && (*s1 == *s2))

				{

							s1++;

									s2++;

										}

			return (*s1 - *s2);

=======
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (op);
>>>>>>> 0acd7f73402b38ff4a630a3071e875e9713307a1
}
