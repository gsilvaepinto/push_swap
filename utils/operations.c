/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilvaepinto <gsilvaepinto@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 13:55:46 by gsilvaepint       #+#    #+#             */
/*   Updated: 2026/03/12 16:29:40 by gsilvaepint      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_index_pos(t_list **a, int target)
{
	t_list	*tmp;
	int		pos;

	tmp = (*a);
	pos = 0;
	while (tmp)
	{
		if (tmp->index == target)
			return (pos);
		pos++;
		tmp = tmp->next;
	}
	return (-1);
}

int	find_min_pos(t_list **a)
{
	t_list	*tmp;
	int		pos;

	tmp = (*a);
	pos = 0;
	while (tmp)
	{
		if (tmp->index == 0)
			return (pos);
		pos++;
		tmp = tmp->next;
	}
	return (-1);
}

void	sort_three(t_list **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->data;
	second = (*a)->next->data;
	third = (*a)->next->next->data;
	if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first < third)
	{
		rra(a);
		sa(a);
	}
	else if (first < second && second > third && first > third)
		rra(a);
}

void	sort_four(t_list **a, t_list **b)
{
	int	min_pos;
	int	size;

	size = ft_lstsize(*a);
	min_pos = find_min_pos(a);
	if (min_pos <= size / 2)
		while ((*a)->index != 0)
			ra(a);
	else
		while ((*a)->index != 0)
			rra(a);
	pb(a, b);
	sort_three(a);
	pa(a, b);
}

void	sort_five(t_list **a, t_list **b)
{
	int	target;
	int	min_pos;
	int	size;

	target = 0;
	size = ft_lstsize(*a);
	while (size > 3)
	{
		min_pos = find_index_pos(a, target);
		if (min_pos <= size / 2)
			while ((*a)->index != target)
				ra(a);
		else
			while ((*a)->index != target)
				rra(a);
		pb(a, b);
		target++;
		size--;
	}
	sort_three(a);
	pa(a, b);
	pa(a, b);
}
