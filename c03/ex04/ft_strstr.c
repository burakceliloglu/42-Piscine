/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcelilog <bcelilog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:42:07 by bcelilog          #+#    #+#             */
/*   Updated: 2024/02/05 15:58:31 by bcelilog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	index2;

	index = 0;
	index2 = 0;
	if (to_find[index2] == '\0')
		return (str);
	while (str[index])
	{
		while (str[index + index2] == to_find[index2] && to_find[index2])
		{
			index2++;
		}
		if (to_find[index2] == '\0')
			return (str + index);
		index++;
		index2 = 0;
	}
	return (0);
}
