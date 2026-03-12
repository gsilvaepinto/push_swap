/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilvaepinto <gsilvaepinto@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 13:00:49 by gsilvaepint       #+#    #+#             */
/*   Updated: 2026/03/12 13:24:00 by gsilvaepint      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **a)
{
	t_list	*last;
	t_list	*tmp;

	if (*a && (*a)->next)
	{
		last = ft_lstlast(*a);
		tmp = (*a);
		while (tmp->next != last)
			tmp = tmp->next;
		tmp->next = NULL;
		last->next = (*a);
		(*a) = last;
		write(1, "rra\n", 4);
	}
}

void	rrb(t_list **b)
{
	t_list	*last;
	t_list	*tmp;

	if (*b && (*b)->next)
	{
		last = ft_lstlast(*b);
		tmp = (*b);
		while (tmp->next != last)
			tmp = tmp->next;
		tmp->next = NULL;
		last->next = (*b);
		(*b) = last;
		write(1, "rrb\n", 4);
	}
}

void	rrr(t_list **a, t_list **b)
{
	t_list	*last;
	t_list	*tmp;

	if (*a && (*a)->next)
	{
		last = ft_lstlast(*a);
		tmp = (*a);
		while (tmp->next != last)
			tmp = tmp->next;
		tmp->next = NULL;
		last->next = (*a);
		(*a) = last;
	}
	if (*b && (*b)->next)
	{
		last = ft_lstlast(*b);
		tmp = (*b);
		while (tmp->next != last)
			tmp = tmp->next;
		tmp->next = NULL;
		last->next = (*b);
		(*b) = last;
	}
	write(1, "rrr\n", 4);
}