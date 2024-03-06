/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcelilog <bcelilog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:30:59 by bcelilog          #+#    #+#             */
/*   Updated: 2024/02/01 11:41:37 by bcelilog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphanumeric(char c)
{
	if ('0' <= c && c <= '9')
		return (0);
	if ('a' <= c && c <= 'z')
		return (0);
	if ('A' <= c && c <= 'Z')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	next;

	index = 0;
	next = 1;
	while (str[index])
	{
		if (next == 1)
		{
			if (str[index] >= 'a' && str[index] <= 'z')
				str[index] = str[index] - 32;
		}
		else if (next == 0)
		{
			if (str[index] >= 'A' && str[index] <= 'Z')
				str[index] = str[index] + 32;
		}
		if (ft_is_alphanumeric(str[index]))
			next = 1;
		else
			next = 0;
		index++;
	}
	return (str);
}
