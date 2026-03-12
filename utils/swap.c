/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilvaepinto <gsilvaepinto@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 19:10:44 by gsilvaepint       #+#    #+#             */
/*   Updated: 2026/03/12 16:36:25 by gsilvaepint      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **a)
{
	int	tmp;

	if (*a && (*a)->next)
	{
		tmp = (*a)->data;
		(*a)->data = (*a)->next->data;
		(*a)->next->data = tmp;
		write(1, "sa\n", 3);
	}
}

void	sb(t_list **b)
{
	int	tmp;

	if (*b && (*b)->next)
	{
		tmp = (*b)->data;
		(*b)->data = (*b)->next->data;
		(*b)->next->data = tmp;
		write(1, "sb\n", 3);
	}
}

void	ss(t_list **a,	t_list	**b)
{
	int	tmp;

	if (*a && (*a)->next)
	{
		tmp = (*a)->data;
		(*a)->data = (*a)->next->data;
		(*a)->next->data = tmp;
	}
	if (*b && (*b)->next)
	{
		tmp = (*b)->data;
		(*b)->data = (*b)->next->data;
		(*b)->next->data = tmp;
	}
	write(1, "ss\n", 3);
}
