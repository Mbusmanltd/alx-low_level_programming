#include "main.h"
<<<<<<< HEAD



/**
 *
 *  * _strpbrk - Searches a string for any of a set of bytes.
 *
 *   * @s: The string to be searched.
 *
 *    * @accept: The set of bytes to be searched for.
 *
 *     *
 *
 *      * Return: If a set is matched - a pointer to the matched byte.
 *
 *       * If no set is matched - NULL.
 *
 *        */



char *_strpbrk(char *s, char *accept)

{

		int index;



			while (*s)

					{

								for (index = 0; accept[index]; index++)

											{

															if (*s == accept[index])

																				return (s);

																	}



										s++;

											}

				return ('\0');

=======
#include <stdio.h>

/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return:  a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
>>>>>>> 0acd7f73402b38ff4a630a3071e875e9713307a1
}
