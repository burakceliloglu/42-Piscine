/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcelilog <bcelilog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 04:02:33 by bcelilog          #+#    #+#             */
/*   Updated: 2024/02/12 16:07:45 by bcelilog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	index;
	int	*result;

	if (min >= max)
		return (0);
	range = max - min;
	result = (int *)malloc(range * sizeof(int));
	if (!result)
		return (0);
	index = 0;
	while (index < range && min < max)
	{
		result[index] = min + index;
		index++;
	}
	return (result);
}
