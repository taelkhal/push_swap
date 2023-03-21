/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_nb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:23:34 by taelkhal          #+#    #+#             */
/*   Updated: 2023/03/19 14:26:05 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_nb(t_stack *stack)
{
	int	i;

	i = stack->nb;
	while(stack)
	{
		if (i > stack->nb)
			i = stack->nb;
		stack = stack->nb;
	}
	return (i);
}
