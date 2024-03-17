/*
#include <unistd.h>

void	ft_putchar(char ch)
{
	write (1, &ch, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-", 1);
		write (1, "2", 1);
		ft_putnbr (147483648);
	}
	else if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * -1;
		ft_putnbr (nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(48 + nb % 10);
}
*/

void    ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

/*
int	main()
{
	int	tab[10] = {1,2,3,4,5,6,7,8,9,10};
	ft_foreach(tab, 10, &ft_putnbr);
}
*/