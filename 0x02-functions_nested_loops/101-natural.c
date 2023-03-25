#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 and 5 up to 1024
 * Return: always (success)
 */

int main(void)
{
	int i, x = 0;

	while (1 < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			x += i;
		}
		i++;
	}
	printf("%d\n", x);
	return (0);
}

