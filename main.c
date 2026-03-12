/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilvaepinto <gsilvaepinto@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:30:13 by gsilvaepint       #+#    #+#             */
/*   Updated: 2026/03/12 12:13:20 by gsilvaepint      ###   ########.fr       */
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
	if (is_ordered(a) == 0)
	{
		if (ft_lstsize(a) == 2)
			sa(&a);
	}
	exit_prog(0, &a);
}
