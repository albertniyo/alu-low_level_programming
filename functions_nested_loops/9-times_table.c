#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int row, col, prdt;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			prdt = row * col;
			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (prdt < 10)
					_putchar(' ');
			}
			if (prdt >= 10)
			{
				_putchar((prdt / 10) + '0');
				_putchar((prdt % 10) + '0');
			}
			else
			{
				_putchar(prdt + '0');
			}
		}
		_putchar('\n');
	}
}
