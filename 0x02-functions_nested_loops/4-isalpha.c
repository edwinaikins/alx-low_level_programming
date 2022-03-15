#include "main.h"
/**
 * _isalpha - Check Holberton
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	int x;

	for (x = 65; x < 91; x++)
		if (x == c)
			return (1);
		else
			for(x = 97; x <123; x++)
				if(x == c)
					return (1);
	return (0);
}
