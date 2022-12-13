#include <stdio.h>

/*
 * main - entry point
 *
 * Description: use putchar to print all alphabet in reverse
 *
 * Return: 0
 *
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
