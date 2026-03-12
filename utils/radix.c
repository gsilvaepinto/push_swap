/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilvaepinto <gsilvaepinto@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:16:23 by gsilvaepint       #+#    #+#             */
/*   Updated: 2026/03/12 16:36:45 by gsilvaepint      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_bits(int size)
{
	int	bits;

	bits = 0;
	while ((size - 1) >> bits)
		bits++;
	return (bits);
}

void	radix(t_list **a, t_list **b)
{
	int	size;
	int	bits;
	int	i;
	int	j;

	i = 0;
	size = ft_lstsize(*a);
	bits = get_bits(size);
	while (i < bits)
	{
		j = 0;
		while (j < size)
		{
			if (((*a)->index >> i) & 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}
