#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: A pointer to the binary string.
 *
 * Return: The converted unsigned integer, or 0 on failure or overflow.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, result = 0, len = 0;
	unsigned long max_value = ULONG_MAX;

	if (!b)
		return (0);

	while (b[len])
		len++;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
		{
			if ((unsigned long)result + base > max_value)
			{
				printf("Overflow: The number exceeds ULONG_MAX (%lu)\n",
						max_value);
				return (0);
			}
			result += base;
		}
		base *= 2;
		len--;
	}

	return (result);
}
