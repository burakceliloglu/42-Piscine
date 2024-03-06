/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcelilog <bcelilog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:04:20 by bcelilog          #+#    #+#             */
/*   Updated: 2024/01/29 13:33:09 by bcelilog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	if (!(b == 0))
	{
		temp_a = *a;
		temp_b = *b;
		*a = temp_a / temp_b;
		*b = temp_a % temp_b;
	}
}
