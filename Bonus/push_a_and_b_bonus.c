/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_and_b_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:15:30 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/16 14:37:57 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	push_a_and_b(t_stack **src, t_stack **dst)
{
	t_stack	*ptr;

	if (*src == NULL)
		return ;
	ptr = (*src)->next;
	(*src)->next = *dst;
	*dst = *src;
	*src = ptr;
}

void	pa(t_stack **a, t_stack **b)
{
	push_a_and_b(b, a);
}

void	pb(t_stack **a, t_stack **b)
{
	push_a_and_b(a, b);
}
