#include "main.h"

<<<<<<< HEAD


/**
 *
 *  * *_strncpy - Copies at most an inputted number
 *
 *   * of bytes from string src into dest.
 *
 *    * @dest: The buffer storing the string copy.
 *
 *     * @src: The source string.
 *
 *      * @n: The maximum number of bytes to copied from src.
 *
 *       *
 *
 *        * Return: A pointer to the resulting string dest.
 *
 *         */



char *_strncpy(char *dest, char *src, int n)

{

		int index = 0, src_len = 0;



			while (src[index++])

						src_len++;



				for (index = 0; src[index] && index < n; index++)

							dest[index] = src[index];



					for (index = src_len; index < n; index++)

								dest[index] = '\0';



						return (dest);

=======
/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
>>>>>>> 0acd7f73402b38ff4a630a3071e875e9713307a1
}
