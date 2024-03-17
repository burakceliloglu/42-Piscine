#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_putnbr(int nb)
{
	long	nblong;

	nblong = nb;
	if (nblong < 0)
	{
		ft_putchar('-');
		nblong *= -1;
	}
	if (nblong > 9)
		ft_putnbr(nblong / 10);
	ft_putchar(nblong % 10 + '0');
}
