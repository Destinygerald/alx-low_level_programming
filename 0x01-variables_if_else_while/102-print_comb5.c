#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;
	int b;
	for (b = 0; b < 100; b++)
	{
		for (a = 0; a < 100; a++)
		{
			if (b < a)
			{
				putchar((b / 10) + 48);
				putchar((b % 10) + 48);
				putchar(' ');
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				if (b= 98 || a != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
