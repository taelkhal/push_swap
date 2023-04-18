/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_max_nb_to_top.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:58:40 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/16 14:25:54 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	place_max_nb_to_top(t_stack **stack)
{
	int	max;
	int	size;

	while (1)
	{
		max = find_max_nb(*stack);
		size = ft_lstsize(*stack);
		if (max == 0)
			break ;
		if (max > size / 2)
			rrb(stack);
		else if (max <= size / 2)
			rb(stack);
	}
}
