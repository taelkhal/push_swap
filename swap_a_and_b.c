/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a_and_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 19:02:27 by taelkhal          #+#    #+#             */
/*   Updated: 2023/03/08 13:09:43 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a_and_b(t_stack *ptr)
{
	t_stack *tmp;
	
	if (ptr == NULL || ptr->next == NULL)
		return ;
	tmp = ptr->nb;
	ptr->nb = ptr->next->nb;
	ptr->next->nb = tmp;	
}

void	sa(t_stack **a)
{
	swap_a_and_b(*a);
	ft_putstr("sa\n", 1);
}

void	sb(t_stack **b)
{
	swap_a_and_b(*b);
	ft_putstr("sb\n", 1);
}

void	ss(t_stack **a, t_stack **b)
{
	swap_a_and_b(*a);
	swap_a_and_b(*b);
	ft_putstr("ss\n", 1);
}
