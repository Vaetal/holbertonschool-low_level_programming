#include <stdio.h>
#include "main.h"
(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
	if (c == uppercase)
	{
	isupper = 1;
	break;
	}
	}

	return (isupper);
}
