/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a_and_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:15 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/16 14:21:27 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a_and_b(t_stack **list_stack)
{
	t_stack	*ptr;
	t_stack	*last_node;

	if (*list_stack == NULL || (*list_stack)->next == NULL)
		return ;
	ptr = *list_stack;
	*list_stack = (*list_stack)->next;
	last_node = *list_stack;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = ptr;
	ptr->next = NULL;
}

void	ra(t_stack **a)
{
	rotate_a_and_b(a);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_stack **b)
{
	rotate_a_and_b(b);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate_a_and_b(a);
	rotate_a_and_b(b);
	ft_putstr_fd("rr\n", 1);
}
