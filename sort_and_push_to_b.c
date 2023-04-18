/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_and_push_to_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:39:50 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/16 14:21:39 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_and_push_to_b(t_stack **a, t_stack **b, int *tab, int chank)
{
	int	i;

	i = 0;
	while (*a)
	{
		if ((*a)->nb <= tab[i])
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->nb > tab[i] && (*a)->nb <= tab[chank + i])
		{
			pb(a, b);
			i++;
		}
		else
			ra(a);
	}
}
