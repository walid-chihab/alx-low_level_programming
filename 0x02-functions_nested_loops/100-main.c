#include "main.h"


	/**
	 * main - check the code.
	 *
	 * Return: Always 0.
	 */
	int main(void)
	{
	    print_times_table(3);
	    _putchar('\n');
	    print_times_table(5);
	    _putchar('\n');
	    print_times_table(98);
	    _putchar('\n');
	    print_times_table(12);  
	    return (0);
	}




=======================================


101-natural.c CODE


/*
	 * File: 101-natural.c
	 * Auth: vincent kip
	 */


	#include <stdio.h>


	/**
	 * main - Lists all the natural numbers below 1024 (excluded)
	 *        that are multiples of 3 or 5.
	 *
	 * Return: Always 0.
	 */
	int main(void)
	{
		int i, sum = 0;


		for (i = 0; i < 1024; i++)
		{
			if ((i % 3) == 0 || (i % 5) == 0)
				sum += i;
		}


		printf("%d\n", sum);


		return (0);
	}

