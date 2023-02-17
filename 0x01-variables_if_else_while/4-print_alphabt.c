#include <stdio.h>

/**
 * main - write a program to print lower case
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)

	{
		if (la != 'e' && la != 'a')
			putchar(la);
	}
	putchar('\n');
	return (0);
}
