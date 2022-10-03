#include "main.h"

<<<<<<< HEAD


/**
 *
 *  * _strspn - Gets the length of a prefix substring
 *
 *   * @s: The string to be searched
 *
 *    * @accept: The prefix to be measured
 *
 *     *
 *
 *      * Return: The number of bytes in s which
 *
 *       * consist only of bytes from accept.
 *
 *        */



unsigned int _strspn(char *s, char *accept)

{

		unsigned int bytes = 0;

			int index;



				while (*s)

						{

									for (index = 0; accept[index]; index++)

												{

																if (*s == accept[index])

																				{

																									bytes++;

																													break;

																																}



																			else if (accept[index + 1] == '\0')

																								return (bytes);

																					}



											s++;

												}

					return (bytes);

=======
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: returns pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *start = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (flag == 0)
			break;
	}
	return (count);
>>>>>>> 0acd7f73402b38ff4a630a3071e875e9713307a1
}
