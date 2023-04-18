/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:14:39 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/16 15:15:50 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack(t_stack **a, char **str)
{
	int			i;
	long int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		nb = ft_atoi(str[i]);
		if (nb < INT_MIN || nb > INT_MAX)
		{
			ft_putstr_fd(RED"Error: Number Is Outside The Integer Range\n", 2);
			exit (1);
		}
		ft_lstadd_back(a, ft_lstnew(nb));
		i++;
	}
	check_dup_nb(*a);
}
