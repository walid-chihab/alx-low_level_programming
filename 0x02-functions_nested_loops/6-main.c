#include "main.h"
	#include <stdio.h>


	/**
	 * main - check the code
	 *
	 * Return: Always 0.
	 */
	int main(void)
	{
	    int r;


	    r = _abs(-1);
	    printf("%d\n", r);
	    r = _abs(0);
	    printf("%d\n", r);
	    r = _abs(1);
	    printf("%d\n", r);
	    r = _abs(-98);
	    printf("%d\n", r);
	    return (0);
	}




====================================


7-print_last_digit.c CODE

#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int a;	

	if (n < 0)
		n = -n;

	a = n % 10;
		
	if (a < 0)
		a = -a;
	
	_putchar(a + '0');
	
	return (a);
		
}

