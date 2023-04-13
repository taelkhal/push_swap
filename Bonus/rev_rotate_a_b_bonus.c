/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_a_b_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:17:32 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/12 15:25:10 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rev_rotate_a_b(t_stack **list_stack)
{
	t_stack *ptr;
	t_stack *last_node;
	t_stack *before_last;

	if(list_stack == NULL || (*list_stack)->next == NULL)
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
}

void	rrb(t_stack **b)
{
	rev_rotate_a_b(b);
}

void	rrr(t_stack **a, t_stack **b)
{
	rev_rotate_a_b(a);
	rev_rotate_a_b(b);
}
