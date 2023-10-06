#include "main.h"
	
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)		
{	
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}


=====================================


8-24_hours.c CODE


#include "main.h"


	/**
	 * jack_bauer - prints every minute of the day of Jack Bauer
	 * starting from 00:00 to 23:59
	 */
	void jack_bauer(void)
	{
		int i, j;


		i = 0;


		while (i < 24)
		{
			j = 0;
			while (j < 60)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(':');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
				_putchar('\n');
				j++;
			}
			i++;
		}
	}

