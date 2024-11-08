#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	in srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	Src = start;
	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
