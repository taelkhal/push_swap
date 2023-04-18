/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_a_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:10:38 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/16 14:21:11 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_a_b(t_stack **list_stack)
{
	t_stack	*ptr;
	t_stack	*last_node;
	t_stack	*before_last;

	if (list_stack == NULL || (*list_stack)->next == NULL)
		return ;
	last_node = *list_stack;
	while (last_node->next != NULL)
	{
		before_last = last_node;
		last_node = last_node->next;
	}
	before_last->next = NULL;
	last_node->next = *list_stack;
	*list_stack = last_node;
}

void	rra(t_stack **a)
{
	rev_rotate_a_b(a);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack **b)
{
	rev_rotate_a_b(b);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_stack **a, t_stack **b)
{
	rev_rotate_a_b(a);
	rev_rotate_a_b(b);
	ft_putstr_fd("rrr\n", 1);
}
