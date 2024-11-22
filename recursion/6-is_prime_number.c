#include "main.h"

int is_divisable(int num, int div);

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisable(n, div));
}

{
	int is_divisable(int num,int div)
	{
		if (num % div == 0)
			return (0);

		if (div == num / 2)
			return (1);

		return (is_divisable(num, div + 1));
	}
