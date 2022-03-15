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
	int l;
	int u;

	for (u = 65; u < 91; u++)
	{
		for (l = 97; l < 123; l++)
		{
			if (u == c || l == c)
				return (1);
		}
	}
	return (0);
}
