#include "main.h"

int  _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;
	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
