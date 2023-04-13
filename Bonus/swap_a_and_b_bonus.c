/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a_and_b_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:14:16 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/12 15:25:26 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swap_a_and_b(t_stack *ptr)
{
	int tmp;
	
	if (ptr == NULL || ptr->next == NULL)
		return ;
	tmp = ptr->nb;
	ptr->nb = ptr->next->nb;
	ptr->next->nb = tmp;
}

void	sa(t_stack **a)
{
	swap_a_and_b(*a);
}

void	sb(t_stack **b)
{
	swap_a_and_b(*b);
}

void	ss(t_stack **a, t_stack **b)
{
	swap_a_and_b(*a);
	swap_a_and_b(*b);
}
