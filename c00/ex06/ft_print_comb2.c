/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcelilog <bcelilog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:34:07 by bcelilog          #+#    #+#             */
/*   Updated: 2024/01/27 10:05:09 by bcelilog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char ch)
{
	write (1, &ch, 1);
}

void	ft_print_numbers(int a, int b)
{
	ft_print_char (48 + a / 10);
	ft_print_char (48 + a % 10);
	write (1, " ", 1);
	ft_print_char (48 + b / 10);
	ft_print_char (48 + b % 10);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_numbers (a, b);
			if (a != 98)
				write (1, ", ", 2);
			b++;
		}
		a++;
	}
}
