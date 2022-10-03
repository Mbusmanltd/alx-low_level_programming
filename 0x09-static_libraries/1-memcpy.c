#include "main.h"

<<<<<<< HEAD


/**
 *
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src
 *
 * Return: pointer to dest
 *
 */



char *_memcpy(char *dest, char *src, unsigned int n)

{

		unsigned int i;



			for (i = 0; i < n; i++)

      {

		dest[i] = src[i];

 									}



				return (dest);

=======
/**
 * _memcpy - a function that copys memory area
 * @dest: memory area destination to copy
 * @src: memory area source to copy from
 * @n: number of bytes
 * Return: returns pointer to copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
>>>>>>> 0acd7f73402b38ff4a630a3071e875e9713307a1
}
