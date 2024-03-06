/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcelilog <bcelilog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:31:08 by bcelilog          #+#    #+#             */
/*   Updated: 2024/02/01 13:16:22 by bcelilog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	temp;

	index = 0;
	while (index < size / 2)
	{
		temp = tab[index];
		tab[index] = tab[size - index - 1];
		tab[size - index - 1] = temp;
		index++;
	}
}
