void	ft_putchar(char ch);

void	ft_putnbr(int nb)
{
	long	nblong;

	nblong = nb;
	if (nb < 0)
	{
		nblong *= -1;
		ft_putchar('-');
	}
	if (nblong > 9)
		ft_putnbr(nblong / 10);
	ft_putchar('0' + nblong);
}