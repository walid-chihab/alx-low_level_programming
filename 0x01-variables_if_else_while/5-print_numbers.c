#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (success)
*/

int main(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		printf("%d", j);
	}
	putchar('\n');
	return (0);

