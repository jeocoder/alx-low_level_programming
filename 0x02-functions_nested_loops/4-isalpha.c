#include "main.h"

/**
 * _isalpha -  a function that checks for alphabetic character
 *
 * @c: Parameter to be printed
 *
 * Return: 1 upon success and 0 when otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
