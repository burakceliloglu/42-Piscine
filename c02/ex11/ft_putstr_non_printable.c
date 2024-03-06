/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcelilog <bcelilog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:40:42 by bcelilog          #+#    #+#             */
/*   Updated: 2024/02/03 17:38:07 by bcelilog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		index;
	char	*h;

	index = 0;
	h = "0123456789abcdef";
	while (str[index] != '\0')
	{
		if (!(str[index] >= 32 && str[index] <= 126))
		{
			ft_putchar('\\');
			ft_putchar(h[str[index] / 16]);
			
			ft_putchar(h[str[index] % 16]);
		}
		else
			ft_putchar(str[index]);
		index++;
	}
}
