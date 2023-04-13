/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:31:00 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/12 15:31:09 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_lstsize(t_stack *stack_a)
{
	int	i;

	i = 0;
	if (!stack_a)
		return (0);
	while (stack_a != NULL)
	{
		stack_a = stack_a -> next;
		i++;
	}
	return (i);
}
