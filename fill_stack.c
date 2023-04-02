/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:14:39 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/01 15:20:43 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack(t_stack **a, char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_lstadd_back(a, ft_lstnew(ft_atoi(str[i])));
		i++;
	}
	check_dup_nb(*a);
}
