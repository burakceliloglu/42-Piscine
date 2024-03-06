/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcelilog <bcelilog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:39:10 by bcelilog          #+#    #+#             */
/*   Updated: 2024/02/05 15:51:21 by bcelilog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	parity;
	int	number;

	parity = 0;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		number = number * 10;
		number = number + *str - 48;
		str++;
	}
	if (parity % 2 == 1)
		return (number * -1);
	return (number);
}
