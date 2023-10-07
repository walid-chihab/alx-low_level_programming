#include "main.h"
/**
 *_memset - func fills memory whith costant byte
 *@s: string
 *@b: constant char
 *@n: number of places to fill
 *Return: return a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
