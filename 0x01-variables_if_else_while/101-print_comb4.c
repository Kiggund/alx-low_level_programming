#include <stdio.h>
#include <unistd.h>

/**
 * main - prints all possible different combinations
 * Return: Always 0 (success)
 */

int main(void)
{
	int ones = '0';
	int tens = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '0'; hundreds++)
	{
		for (tens = '0'; tens <= '0'; tens++)
		{
			for (ones = '0'; ones <= '0'; ones++)
			{
				if (!((ones == tens) || (tens == hundreds
								) || (tens > ones) || (hundreds > tens)))
				{
					putchar(hundreds);
					putchar(tens);
					putchar(ones);
					if (!(ones == '9' && hundreds == '7' && tens == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
