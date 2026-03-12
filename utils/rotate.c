/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilvaepinto <gsilvaepinto@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 12:35:09 by gsilvaepint       #+#    #+#             */
/*   Updated: 2026/03/12 13:00:37 by gsilvaepint      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **a)
{
	t_list	*tmp;

	if (*a)
	{
		tmp = (*a);
		(*a) = (*a)->next;
		tmp->next = NULL;
		ft_lstadd_back(a, tmp);
		write(1, "ra\n", 3);
	}
}

void	rb(t_list **b)
{
	t_list	*tmp;

	if (*b)
	{
		tmp = (*b);
		(*b) = (*b)->next;
		tmp->next = NULL;
		ft_lstadd_back(b, tmp);
		write(1, "rb\n", 3);
	}
}

void	rr(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (*a)
	{
		tmp = (*a);
		(*a) = (*a)->next;
		tmp->next = NULL;
		ft_lstadd_back(a, tmp);
	}
	if (*b)
	{
		tmp = (*b);
		(*b) = (*b)->next;
		tmp->next = NULL;
		ft_lstadd_back(b, tmp);
	}
	write(1, "rr\n", 3);
}
