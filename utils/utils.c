/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilvaepinto <gsilvaepinto@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:44:45 by gsilvaepint       #+#    #+#             */
/*   Updated: 2026/03/11 17:59:53 by gsilvaepint      ###   ########.fr       */
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
	tmp->index= -1;
	ft_lstadd_back(a, tmp);
}

void	print_lst(t_list *a)
{
	while (a)
	{
		printf("%d\n", a->data);
		a = a->next;
	}
}