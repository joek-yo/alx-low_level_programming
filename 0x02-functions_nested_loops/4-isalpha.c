#include "main.h"

/**
 * _isalpa - checks for alphabetic character
 * @c the haracter to be checked
 * return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >='a' && c <='z') || (c >='A' && c <='Z'));
}
