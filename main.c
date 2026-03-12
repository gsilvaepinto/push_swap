/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilvaepinto <gsilvaepinto@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:30:13 by gsilvaepint       #+#    #+#             */
/*   Updated: 2026/03/12 16:35:55 by gsilvaepint      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (argc <= 1)
		exit_prog(0, &a);
	parse_values(argv, &a);
	assign_index(&a);
	if (is_ordered(a) == 0)
	{
		if (ft_lstsize(a) == 2)
			sa(&a);
		if (ft_lstsize(a) == 3)
			sort_three(&a);
		if (ft_lstsize(a) == 4)
			sort_four(&a, &b);
		if (ft_lstsize(a) == 5)
			sort_five(&a, &b);
		if (ft_lstsize (a) >= 6)
			radix(&a, &b);
	}
	exit_prog(0, &a);
}
