#include "main.h"
#include <stddef.h>

/**
 * _strstr - searches string for a substring
 * @haystack: string to search
 * @needle: the substring to find
 *
 * Return: pointer to first matching substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int counter;

	while (*haystack)
	{
		for (counter = 0; *(needle + counter); counter++)
			if (*(needle + counter) != *(haystack + counter))
				break;
		if (!*(needle + counter))
			return (haystack);
		haystack++;
	}
	return (NULL);
}
