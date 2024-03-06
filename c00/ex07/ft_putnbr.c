/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcelilog <bcelilog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:49:03 by bcelilog          #+#    #+#             */
/*   Updated: 2024/02/14 18:14:30 by bcelilog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-", 1);
		ft_putnbr (214748364);
		write (1, "8", 1);
	}
	else if (nb < 0)
	{
		write (1, "-", 1);
		ft_putnbr (nb * -1);
	}
	else if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_putchar (48 + nb % 10);
	}
	else
	{
		ft_putchar (48 + nb);
	}
}

int	main()
{
	ft_putnbr(42);
}
