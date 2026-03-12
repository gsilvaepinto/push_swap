/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilvaepinto <gsilvaepinto@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:44:45 by gsilvaepint       #+#    #+#             */
/*   Updated: 2026/03/12 16:28:02 by gsilvaepint      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi(char **str, t_list **a)
{
	int			sign;
	long long	num;

	sign = 1;
	num = 0;
	while (**str == ' ' || (**str >= '\t' && **str <= '\r'))
		(*str)++;
	if (**str == '+' || **str == '-')
	{
		if (**str == '-')
			sign *= -1;
		(*str)++;
	}
	while (**str >= '0' && **str <= '9')
	{
		num = (num * 10) + (sign * (**str - '0'));
		if (num > INT_MAX || num < INT_MIN)
			exit_prog(1, a);
		(*str)++;
	}
	return ((int)num);
}

void	insert(t_list **a, int value)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (!tmp)
		exit_prog(1, a);
	tmp->data = value;
	tmp->next = NULL;
	tmp->index = -1;
	ft_lstadd_back(a, tmp);
}

void	check_dup(int value, t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	while (tmp)
	{
		if (value == tmp->data)
			exit_prog(1, a);
		tmp = tmp->next;
	}
}

int	is_ordered(t_list *a)
{
	while (a && a->next)
	{
		if (a->data > a->next->data)
			return (0);
		a = a->next;
	}
	return (1);
}

void	assign_index(t_list **a)
{
	t_list	*tmp;
	t_list	*inside;
	int		count;

	tmp = (*a);
	while (tmp)
	{
		count = 0;
		inside = (*a);
		while (inside)
		{
			if (inside->data < tmp->data)
				count++;
			inside = inside->next;
		}
		tmp->index = count;
		tmp = tmp->next;
	}
}
