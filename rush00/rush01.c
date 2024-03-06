#include <unistd.h>

extern void	ft_putchar(char c);

void	ft_print_letter(int x, char first, char middle, char last)
{
	int	column;

	column = 1;
	while (column <= x)
	{
		if (column == 1)
		{
			ft_putchar (first);
		}
		else if (column == x)
		{
			ft_putchar (last);
		}
		else
		{
			ft_putchar (middle);
		}
		column++;
	}
	ft_putchar ('\n');
}

void	rush(int x, int y)
{
	int	row;

	row = 1;
	if (x <= 0 || y <= 0)
	{
		write (1, "INVALID NUMBER!\n", 15);
		return;
	}
	while (row <= y)
	{
		if (row == 1)
		{
			ft_print_letter (x, '/', '*', '\\');
		}
		else if (row == y)
		{
			ft_print_letter (x, '\\', '*', '/');
		}
		else
		{
			ft_print_letter (x, '*', ' ', '*');
		}
		row++;
	}
}
