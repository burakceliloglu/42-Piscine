/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcelilog <bcelilog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:39:41 by bcelilog          #+#    #+#             */
/*   Updated: 2024/02/06 17:39:46 by bcelilog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

void	ft_putchar(char ch)
{
	write (1, &ch, 1);
}

int	ft_is_repated(char *str, char ch)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str == ch)
			count++;
		if (count == 2)
			return (1);
		str++;
	}
	return (0);
}

void	ft_putnbr(int nbr, int baselength, char *base)
{
	long	nlong;

	nlong = nbr;
	if (nlong < 0)
	{
		nlong = nlong * -1;
		ft_putchar('-');
	}
	if (nlong >= baselength)
		ft_putnbr(nlong / baselength, baselength, base);
	ft_putchar(base[nlong % baselength]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	baselength;
	int	basevalue;

	basevalue = 0;
	baselength = ft_strlen(base);
	if (base[basevalue] == '\0' || baselength == 1)
		return ;
	while (base[basevalue])
	{
		if (base[basevalue] == '-' || base[basevalue] == '+')
			return ;
		if (ft_is_repated(base, base[basevalue]) == 1)
			return ;
		basevalue++;
	}
	ft_putnbr(nbr, baselength, base);
}
