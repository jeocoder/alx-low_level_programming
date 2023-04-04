#include "main.h"
#include <string.h>
/**
 * _strstr -  a function that locates a substring
 * @haystack: input 1
 * @needle: input 2
 * Return: 0 upon success
 */

char *_strstr(char *haystack, char *needle)
{
	size_t needle_len = strlen(needle);

	if (needle_len == 0)
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			if (strncmp(haystack, needle, needle_len) == 0)
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (0);
}
