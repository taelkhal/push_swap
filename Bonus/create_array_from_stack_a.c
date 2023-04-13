/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array_from_stack_a.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:43:23 by taelkhal          #+#    #+#             */
/*   Updated: 2023/04/12 15:43:32 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	*create_array_from_stack_a(t_stack *a)
{
    int	*str;
    int	i;
	int size;

	i = 0;
	size = ft_lstsize(a);
	str = malloc(sizeof(int) * size);
	while (a)
	{
		str[i] = a->nb;
		a = a->next;
		i++;
	}
	return (str);
}
