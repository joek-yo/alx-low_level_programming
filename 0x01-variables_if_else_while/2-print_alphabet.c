#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the lowercase alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
