/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_nb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:27:58 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/16 14:24:09 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack **a)
{
	if ((*a)->nb > (*a)->next->nb)
		sa(a);
}

void	sort_three(t_stack **a)
{
	if (((*a)->nb > (*a)->next->nb)
		&& ((*a)->nb < (*a)->next->next->nb))
		sa(a);
	else if (((*a)->nb < (*a)->next->nb)
		&& ((*a)->nb > (*a)->next->next->nb))
		rra(a);
	else if (((*a)->nb < (*a)->next->nb) && ((*a)->nb < (*a)->next->next->nb))
	{
		if ((*a)->next->nb > (*a)->next->next->nb)
		{
			rra(a);
			sa(a);
		}
	}
	else if (((*a)->nb > (*a)->next->nb)
		&& ((*a)->nb > (*a)->next->next->nb))
	{
		if ((*a)->next->nb < (*a)->next->next->nb)
			ra(a);
		else
		{
			sa(a);
			rra(a);
		}
	}
}

void	sort_four_and_five(t_stack **a, t_stack **b)
{
	int	i;

	while (ft_lstsize(*a) > 3 && ft_lstsize(*a) < 6)
	{
		i = find_min_nb(*a);
		while (i != (*a)->nb)
		{
			if (get_pos_nb(*a, i) > ft_lstsize(*a) / 2)
				rra(a);
			else
				ra(a);
		}
		pb(a, b);
	}
	sort_three(a);
	while (*b)
		pa(a, b);
}

void	sort_up_to_five(t_stack **a, t_stack **b, int chank)
{
	int	*tab;

	tab = fill_tab(*a);
	sort_and_push_to_b(a, b, tab, chank);
	while (*b)
	{
		place_max_nb_to_top(b);
		pa(a, b);
	}
	free (tab);
}
