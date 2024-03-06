/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcelilog <bcelilog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:33:59 by bcelilog          #+#    #+#             */
/*   Updated: 2024/02/05 14:46:45 by bcelilog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	srclength;
	unsigned int	destlength;

	srclength = ft_strlen(src);
	destlength = ft_strlen(dest);
	if (size <= destlength || size == 0)
		return (srclength + size);
	i = destlength;
	j = 0;
	while (src[j] != '\0' && i + j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (srclength + destlength);
}
