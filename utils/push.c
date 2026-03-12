/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilvaepinto <gsilvaepinto@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 12:14:11 by gsilvaepint       #+#    #+#             */
/*   Updated: 2026/03/12 12:33:03 by gsilvaepint      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (*b)
	{
		tmp = (*b);
		(*b) = (*b)->next;
		tmp->next = (*a);
		(*a) = tmp;
		write(1, "pa\n", 3);
	}
}

void	pb(t_list **a,	t_list **b)
{
	t_list	*tmp;

	if (*a)
	{
		tmp = (*a);
		(*a) = (*a)->next;
		tmp->next = (*b);
		(*b) = tmp;
		write(1, "pb\n", 3);
	}
}