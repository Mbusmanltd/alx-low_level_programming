#include "main.h"
<<<<<<< HEAD



/**
 *
 *  * _strchr - Locates a character in a string.
 *
 *   * @s: The string to be searched.
 *
 *    * @c: The character to be located
 *
 *     *
 *
 *      * Return: If c is found - a pointer to the first occurence.
 *
 *       * if c is not found - NULL.
 *
 *        */



char *_strchr(char *s, char c)

{

		int index;



			for (index = 0; s[index] >= '\0'; index++)

					{

								if (s[index] == c)

												return (s + index);

									}

				return ('\0');

=======
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string.
 * @s: an input string to search in
 * @c: an input character to locate into string s
 * Return: returns pointer to c position
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
>>>>>>> 0acd7f73402b38ff4a630a3071e875e9713307a1
}
