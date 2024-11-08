#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;
	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	for (; i < n; i++)
		*dest++ = '\0';

	return (temp);
	}
