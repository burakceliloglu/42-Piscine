/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcelilog <bcelilog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:54:04 by bcelilog          #+#    #+#             */
/*   Updated: 2024/02/01 13:53:26 by bcelilog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] <= 'z' && str[index] >= 'a'))
		{
			if (!(str[index] <= 'Z' && str[index] >= 'A'))
			{
				return (0);
			}
		}
		index++;
	}
	return (1);
}
