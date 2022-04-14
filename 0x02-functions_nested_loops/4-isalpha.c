#include "main.h"

/**
 * _isalpha - Main Func
 * @c : integer
 * Return: End
 */

int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	return (1);

return (0);
}
