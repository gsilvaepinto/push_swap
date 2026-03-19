/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_values.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilheda <guilheda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:36:52 by gsilvaepint       #+#    #+#             */
/*   Updated: 2026/03/19 13:47:08 by guilheda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	is_num(char *s, t_list **a)
{
	while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
		s++;
	if (*s == '+' || *s == '-')
		s++;
	if (*s < '0' || *s > '9')
		exit_prog(1, a);
	while (*s >= '0' && *s <= '9')
		s++;
	if (*s != ' ' && (*s < '\t' || *s > '\r') && *s)
		exit_prog(1, a);
}

void	parse_values(char **argv, t_list **a)
{
	int			i;
	long long	num;
	char		*str;

	i = 0;
	num = 0;
	while (argv && argv[++i])
	{
		str = argv[i];
		if (!*str)
			exit_prog(1, a);
		while (*str)
		{
			while (*str == ' ')
				str++;
			if (!*str)
				break ;
			is_num(str, a);
			num = ft_atoi(&str, a);
			check_dup(num, a);
			insert(a, num);
		}
	}
}
