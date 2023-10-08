#include <stdio.h>
/**
 * main 0 prints the alphabet.
 *
 * Return Always 0 (Success_
 */
int main(void)
{
	int i;

	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
