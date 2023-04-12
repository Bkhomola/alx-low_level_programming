#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 characters
 * Return: the converted number or 0 if there is one or more characters in
 * string @b that is not 0 or 1, or @b is NULL
 */

unsigned int binary_to_uint(const char *b)

int n = 0;
	unsigned int n = 0;
	int power = 0;

	if (b == '\0')
		return (0);

	while (b[n + 1])
		n++;

	while (i >= 0)
	{
		if (b[n] == '0')
		{
			n--;
			power++;
		}
		else if (b[n] == '1')
		{
			n += (1 << power);
			n--;
			power++;
		}
		else
			return (0);
	}
	return (n);


}
