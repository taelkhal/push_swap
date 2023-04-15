/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:15:53 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/15 14:16:28 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
			ft_putstr_fd(RED"ERROR: your number is greater or less than intiger interval\n", 2);
			exit (1);
		}
		ft_lstadd_back(a, ft_lstnew(nb));
		i++;
	}
	check_dup_nb(*a);
}
