/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort_up_to_five.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:49:42 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/02 15:07:51 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

int	*fill_tab(t_stack *a)
{
	int	*tab;
	int	size;
	int	i;

	i = 0;
	size = ft_lstsize(a);
	tab = malloc(sizeof(int) * size);
	while (a)
	{
		tab[i] = a->nb;
		a = a->next;
		i++;
	}
	return (sort_int_tab(tab, size));
}
