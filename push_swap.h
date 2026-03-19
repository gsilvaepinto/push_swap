/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilheda <guilheda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:00:07 by gsilvaepint       #+#    #+#             */
/*   Updated: 2026/03/19 14:03:59 by guilheda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}	t_list;

void	free_lst(t_list **a);
void	exit_prog(int i, t_list **a);

// PARSE VALUES
void	is_num(char *s, t_list **a);
void	parse_values(char **argv, t_list **a);

// UTILS
int		ft_atoi(char **str, t_list **a);
void	insert(t_list **a, int value);
void	print_lst(t_list *a);
void	check_dup(int value, t_list **a);
int		is_ordered(t_list *a);
int		find_min_pos(t_list **a);
void	assign_index(t_list **a);
int		find_index_pos(t_list **a, int target);

// LIBFT
t_list	*ft_lstlast(t_list *lst);\
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);

// OPERATIONS
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a,	t_list	**b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a,	t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	sort_three(t_list **a);
void	sort_four(t_list **a, t_list **b);
void	sort_five(t_list **a, t_list **b);
int		get_bits(int size);
void	radix(t_list **a, t_list **b);

#endif