/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcelilog <bcelilog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:06:13 by bcelilog          #+#    #+#             */
/*   Updated: 2024/02/13 15:59:10 by bcelilog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*cp;
	int	size;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	cp = (int *)malloc(sizeof(int) * size);
	if (!cp)
	{
		*range = 0;
		return (-1);
	}
	*range = cp;
	i = 0;
	while (i < size && min < max)
	{
		cp[i] = min;
		min++;
		i++;
	}
	return (size);
}
