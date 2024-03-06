/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcelilog <bcelilog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:04:14 by bcelilog          #+#    #+#             */
/*   Updated: 2024/01/29 13:34:40 by bcelilog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	index;

	while (size > 0)
	{
		index = 0;
		while (index < size - 1)
		{
			if (tab[index] > tab[index + 1])
			{
				temp = tab[index];
				tab[index] = tab[index + 1];
				tab[index + 1] = temp;
			}
			index++;
		}
		size--;
	}
}
