/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max_nb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:02:46 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/16 14:14:29 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max_nb(t_stack *stack)
{
	int	max_nb;
	int	max_index;
	int	i;

	i = 0;
	max_index = 0;
	max_nb = stack->nb;
	while (stack)
	{
		if (max_nb < stack->nb)
		{
			max_nb = stack->nb;
			max_index = i;
		}
		stack = stack->next;
		i++;
	}
	return (max_index);
}
