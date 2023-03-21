/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_and_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:16:30 by taelkhal          #+#    #+#             */
/*   Updated: 2023/03/07 12:58:20 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a_and_b(t_stack **src, t_stack **dst)
{
	t_stack *ptr;

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
	ft_putstr("pa\n", 1);
}

void	pb(t_stack **a, t_stack **b)
{
	push_a_and_b(a, b);
	ft_putstr("pb\n", 1);
}
