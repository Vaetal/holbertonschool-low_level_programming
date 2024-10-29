#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 *
 * Description: This function uses _putchar to print the alphabet 
 * in lowercase, followed by a new line, 10 times.
 * 
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	    char i;
	        int j;

		    for (j = 0; j < 10; j++)
			        {
					        for (i = 'a'; i <= 'z'; i++)
							        {
									            _putchar(i);
										            }
						        _putchar('\n');
							    }
}

